/*
 * XREFs of ?OnOrientationChanged@MobileCursorBroker@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x1800306A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::OnOrientationChanged(
        MobileCursorBroker *this,
        struct IInputDisplay *a2,
        enum DISPLAYCONFIG_ROTATION a3)
{
  unsigned int v3; // ebx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // r9d
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = 1;
  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
          v3 = 8;
      }
      else
      {
        v3 = 4;
      }
    }
    else
    {
      v3 = 2;
    }
  }
  v8 = (*(__int64 (__fastcall **)(struct IInputDisplay *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v13);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*((__int64 (__fastcall **)(__int64, _QWORD))this + 8))(v13, v3);
    v10 = v8;
    if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 715;
      goto LABEL_14;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 714;
LABEL_14:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v11, v8);
  }
  return v10;
}
