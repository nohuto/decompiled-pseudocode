/*
 * XREFs of ?OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x18002D700
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Reset@CShellEdgyImpl@@QEAAXXZ @ 0x18002C078 (-Reset@CShellEdgyImpl@@QEAAXXZ.c)
 *     ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18002D880 (-OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x18002DC28 (-OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnTouchInfo(EdgeGestureTarget *this, struct TouchInfo *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // r9d
  CShellEdgyImpl *v9; // rcx
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0;
  if ( (a2->Flags & 0x400) != 0 )
  {
    *((_DWORD *)this + 6) = 1;
    v5 = *((_QWORD *)this + 6);
LABEL_27:
    CShellEdgyImpl::Reset((CShellEdgyImpl *)(v5 + 200));
    return v2;
  }
  if ( (a2->Flags & 1) == 0
    || *((_DWORD *)this + 24) == 2
    || (v6 = EdgeGestureTarget::OnTouchSessionBegin((EdgeGestureTarget *)((char *)this - 16), a2), v2 = v6, v6 >= 0) )
  {
    if ( a2->TimeStamp >= *((_DWORD *)this + 9) )
    {
      if ( *((_DWORD *)this + 6) )
      {
LABEL_22:
        if ( (a2->Flags & 4) != 0 )
        {
          if ( !*((_DWORD *)this + 6) )
            *((_DWORD *)this + 6) = 1;
          if ( *((_DWORD *)this + 6) == 1 )
          {
            v5 = *((_QWORD *)this + 6);
            goto LABEL_27;
          }
        }
        return v2;
      }
      v9 = (CShellEdgyImpl *)(*((_QWORD *)this + 6) + 200LL);
      *((_DWORD *)this + 6) = 1;
      CShellEdgyImpl::Reset(v9);
    }
    if ( !*((_DWORD *)this + 6) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, struct TouchInfo *))(**((_QWORD **)this + 10) + 32LL))(
             *((_QWORD *)this + 10),
             a2);
      v2 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v2;
        v8 = 475;
        goto LABEL_8;
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 10) + 64LL))(
             *((_QWORD *)this + 10),
             &v11);
      v2 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v2;
        v8 = 476;
        goto LABEL_8;
      }
      v6 = EdgeGestureTarget::OnGestureUpdate((char *)this - 16, v11);
      v2 = v6;
      if ( v6 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v2;
        v8 = 478;
        goto LABEL_8;
      }
    }
    goto LABEL_22;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 463;
LABEL_8:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v8, v6);
  }
  return v2;
}
