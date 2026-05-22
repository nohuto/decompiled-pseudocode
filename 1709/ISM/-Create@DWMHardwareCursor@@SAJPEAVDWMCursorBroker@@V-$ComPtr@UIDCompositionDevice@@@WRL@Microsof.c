/*
 * XREFs of ?Create@DWMHardwareCursor@@SAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180027650
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025900 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0DWMHardwareCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@@Z @ 0x18002733C (--0DWMHardwareCursor@@IEAA@PEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@.c)
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMHardwareCursor::Create(__int64 a1, __int64 *a2, __int128 *a3, int a4, DWMHardwareCursor **a5)
{
  DWMHardwareCursor **v9; // r14
  int v10; // ebx
  int v11; // r9d
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  DWMHardwareCursor *v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF

  v9 = a5;
  if ( !a5 )
  {
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_25;
    v11 = (_DWORD)a5 + 48;
LABEL_4:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v11, 87);
    goto LABEL_25;
  }
  if ( !a1 )
  {
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_25;
    v11 = 49;
    goto LABEL_4;
  }
  v12 = malloc(0x1E0uLL);
  v14 = (__int64)v12;
  if ( v12 )
    memset(v12, 0, 0x1E0uLL);
  if ( v14 )
  {
    v21 = *a3;
    v15 = *a2;
    a5 = (DWMHardwareCursor **)v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = (DWMHardwareCursor *)DWMHardwareCursor::DWMHardwareCursor(v14, a1, &a5, a4, &v21);
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    v17 = DWMHardwareCursor::Initialize(v16);
    v10 = v17;
    if ( v17 >= 0 )
    {
      *v9 = v16;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 54, v17);
    }
    if ( v10 < 0 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v16 + 3) + 24LL))((_QWORD *)v16 + 3, 1LL);
  }
  else
  {
    v10 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 52, 14);
  }
LABEL_25:
  v19 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v10;
}
