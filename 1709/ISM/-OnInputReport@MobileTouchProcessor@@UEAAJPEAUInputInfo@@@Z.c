/*
 * XREFs of ?OnInputReport@MobileTouchProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006B2A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileTouchProcessor::OnInputReport(MobileTouchProcessor *this, struct InputInfo *a2)
{
  unsigned int v2; // esi
  int v5; // r8d
  char *v6; // rcx
  unsigned int v7; // eax
  _DWORD *v8; // rdx
  int v9; // eax
  char v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rcx

  v2 = 0;
  if ( *(char *)a2 >= 0 )
    goto LABEL_14;
  v5 = *((_DWORD *)a2 + 174);
  v6 = 0LL;
  v7 = 0;
  v8 = (_DWORD *)((char *)this + 208);
  while ( *v8 != v5 )
  {
    ++v7;
    v8 += 4;
    if ( v7 >= 3 )
      goto LABEL_7;
  }
  v6 = (char *)this + 16 * v7 + 208;
LABEL_7:
  if ( !*((_BYTE *)a2 + 689) && v6 && (*((_DWORD *)v6 + 3) || *((_BYTE *)this + 260)) )
  {
    v9 = *((_DWORD *)this + 64);
    if ( v9 == 0x7FFFFFFF )
    {
      if ( *((_BYTE *)a2 + 700) )
      {
        *(_DWORD *)a2 = 136;
        *((_DWORD *)a2 + 12) = 1;
        *((_DWORD *)a2 + 17) = *((__int16 *)v6 + 2);
        *((_DWORD *)a2 + 18) = *((__int16 *)v6 + 3);
        *((_DWORD *)a2 + 15) = 3;
        *((_DWORD *)this + 64) = v5;
      }
    }
    else if ( v9 == v5 && !*((_BYTE *)a2 + 700) )
    {
      *(_DWORD *)a2 = 136;
      *((_DWORD *)a2 + 12) = 1;
      *((_DWORD *)a2 + 17) = *((__int16 *)v6 + 2);
      v12 = *((__int16 *)v6 + 3);
      *((_DWORD *)a2 + 15) = 0;
      *((_DWORD *)a2 + 18) = v12;
      *((_DWORD *)this + 64) = 0x7FFFFFFF;
    }
    goto LABEL_14;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 21) + 48LL))(
          *((_QWORD *)this + 21),
          a2);
  v2 = v13;
  if ( v13 >= 0 )
  {
LABEL_14:
    if ( (*(_BYTE *)a2 & 8) != 0 )
    {
      v10 = 0;
      if ( !*((_BYTE *)a2 + 689) )
      {
        v11 = 0LL;
        if ( *((_DWORD *)a2 + 12) )
        {
          while ( (*((_BYTE *)a2 + 48 * v11 + 60) & 2) == 0 )
          {
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= *((_DWORD *)a2 + 12) )
              goto LABEL_27;
          }
          v10 = 1;
        }
      }
LABEL_27:
      v16 = *((_DWORD *)a2 + 1);
      if ( v16 != *((_DWORD *)this + 66) )
      {
        if ( *((_BYTE *)this + 268) || *((_BYTE *)this + 269) )
          *((_BYTE *)this + 269) = v10;
        else
          *((_DWORD *)this + 66) = v16;
      }
      if ( *((_DWORD *)a2 + 1) == *((_DWORD *)this + 66) )
      {
        v17 = *((_QWORD *)this + 24);
        *((_BYTE *)this + 268) = v10;
        v13 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v17 + 48LL))(v17, a2);
        v2 = v13;
        if ( v13 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v15 = 692;
          goto LABEL_36;
        }
      }
    }
    return v2;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v15 = 651;
LABEL_36:
    McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, v15, v13);
  }
  return v2;
}
