/*
 * XREFs of ?Initialize@EdgeGestureTarget@@IEAAJ_KPEAX@Z @ 0x18002CBFC
 * Callers:
 *     ?Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@_KPEAXPEAPEAV1@@Z @ 0x18002CE3C (-Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@_KPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z @ 0x18002D03C (-UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z.c)
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800438DC (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x18007203C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::Initialize(EdgeGestureTarget *this, unsigned __int64 a2, void *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  int updated; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // r9d
  TouchInfoAdapter *v12; // rax
  bool v13; // r8
  TouchInfoAdapter *v14; // rbx
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v3 = (_QWORD *)((char *)this + 104);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  updated = CoreUICreate(v3);
  v10 = updated;
  if ( updated >= 0 )
  {
    v12 = (TouchInfoAdapter *)malloc(0x2D0uLL);
    v14 = v12;
    if ( v12 )
      memset(v12, 0, 0x2D0uLL);
    if ( v14 )
      v14 = TouchInfoAdapter::TouchInfoAdapter(
              v14,
              (struct ITouchInfoAdapterClient *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
              v13);
    if ( *((TouchInfoAdapter **)this + 11) != v14 )
    {
      if ( v14 )
        (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v14 + 8LL))(v14);
      v9 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = v14;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( *((_QWORD *)this + 11) )
    {
      v15 = malloc(0x70uLL);
      v16 = v15;
      if ( v15 )
        memset(v15, 0, 0x70uLL);
      if ( v16 )
      {
        v17 = *((_QWORD *)this + 11);
        v16[26] = 0;
        *((_WORD *)v16 + 54) = 0;
        *(_QWORD *)v16 = &RefCountedObject::`vftable';
        *((_QWORD *)v16 + 2) = v17;
        v16[2] = 1;
        *(_QWORD *)v16 = &SessionBasedPointerDeviceArbitration::`vftable';
        memset(v16 + 6, 0, 0x50uLL);
      }
      if ( *((_DWORD **)this + 10) != v16 )
      {
        if ( v16 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
        v9 = *((_QWORD *)this + 10);
        *((_QWORD *)this + 10) = v16;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( *((_QWORD *)this + 10) )
      {
        v18 = *((_QWORD *)this + 12);
        if ( v18 )
        {
          *((_QWORD *)this + 12) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        updated = GestureRecognizerCreate((struct IGestureRecognizer **)this + 12);
        v10 = updated;
        if ( updated >= 0 )
        {
          updated = EdgeGestureTarget::UpdateInputTarget(this, a2, a3);
          v10 = updated;
          if ( updated < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v11 = 59;
            goto LABEL_38;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v11 = 57;
          goto LABEL_38;
        }
      }
      else
      {
        LOBYTE(updated) = 14;
        v10 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v11 = 54;
          goto LABEL_38;
        }
      }
    }
    else
    {
      LOBYTE(updated) = 14;
      v10 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v11 = 47;
        goto LABEL_38;
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 41;
LABEL_38:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v11, updated);
  }
  return v10;
}
