/*
 * XREFs of ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800269BC
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025900 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@@Z @ 0x1800264C4 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputT.c)
 *     ?Initialize@DWMCursor@@QEAAJ_N@Z @ 0x18002678C (-Initialize@DWMCursor@@QEAAJ_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::Create(__int64 a1, __int64 *a2, __int128 *a3, int a4, DWMCursor **a5)
{
  DWMCursor **v9; // r14
  unsigned int v10; // ebx
  int v11; // r9d
  void *v12; // rax
  __int64 v13; // r8
  const char *v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  DWMCursor *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int128 v22; // [rsp+40h] [rbp-28h] BYREF

  v9 = a5;
  if ( !a5 )
  {
    v10 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_19;
    v11 = (_DWORD)a5 + 97;
LABEL_18:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v11, v10);
    goto LABEL_19;
  }
  *a5 = 0LL;
  v12 = malloc(0x158uLL);
  v15 = (__int64)v12;
  if ( v12 )
    memset(v12, 0, 0x158uLL);
  if ( v15 )
  {
    v22 = *a3;
    v16 = *a2;
    a5 = (DWMCursor **)v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = (DWMCursor *)DWMCursor::DWMCursor(v15, a1, &a5, a4, &v22);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v10 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_19;
    v11 = 110;
    goto LABEL_18;
  }
  v18 = DWMCursor::Initialize(v17, 0, v13, v14);
  v10 = v18;
  if ( v18 >= 0 )
  {
    *v9 = v17;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 106, v18);
  }
LABEL_19:
  v20 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v10;
}
