/*
 * XREFs of ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800913C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009460 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002634C (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ??0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180091158 (--0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  ButtonProcessor *v4; // rax
  ButtonProcessor *v5; // rbx
  ButtonProcessor *v6; // rdi
  int v7; // esi
  __int64 v8; // rcx
  HKEY v9; // rcx
  __int64 v10; // rcx
  PTP_WORK ThreadpoolWork; // rbp
  struct _TP_WORK *v12; // r14
  DWORD LastError; // ebx
  signed int v14; // eax
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF
  ButtonProcessor *v17; // [rsp+48h] [rbp-20h]

  v4 = (ButtonProcessor *)malloc(0xA8uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0xA8uLL);
  if ( v5 )
    v6 = ButtonProcessor::ButtonProcessor(v5, *a1, a1[1]);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v8 = *((_QWORD *)v6 + 5);
    if ( v8 )
    {
      *((_QWORD *)v6 + 5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v7 = CoreUICreate((char *)v6 + 40);
    if ( v7 >= 0 )
    {
      *((_WORD *)v6 + 28) = 0;
      v9 = (HKEY)*((_QWORD *)v6 + 6);
      if ( v9 )
      {
        *((_QWORD *)v6 + 6) = 0LL;
        (*(void (__fastcall **)(HKEY))(*(_QWORD *)v9 + 16LL))(v9);
      }
      RegistryWatcher::Create(
        v9,
        L"SYSTEM\\INPUT\\BUTTONS",
        v6,
        (void (*)(void *, HKEY))ButtonProcessor::OnButtonRegistryKeyChangeStatic,
        (struct RegistryWatcher **)v6 + 6);
      *(_DWORD *)(*((_QWORD *)v6 + 4) + 4LL) |= 4u;
      *(_QWORD *)&v16 = *((_QWORD *)v6 + 4);
      v17 = v6;
      *((_QWORD *)&v16 + 1) = *((_QWORD *)v6 + 3);
      v10 = *((_QWORD *)v6 + 8);
      if ( v10 )
      {
        *((_QWORD *)v6 + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v7 = CreateChildInputProcessor(4, &v16, (__int64)v6 + 64);
      if ( v7 >= 0 )
      {
        ThreadpoolWork = CreateThreadpoolWork(ButtonProcessor::StaticExecuteWorkItems, v6, 0LL);
        v12 = (struct _TP_WORK *)*((_QWORD *)v6 + 20);
        if ( v12 )
        {
          LastError = GetLastError();
          WaitForThreadpoolWorkCallbacks(v12, 0);
          CloseThreadpoolWork(v12);
          SetLastError(LastError);
        }
        *((_QWORD *)v6 + 20) = ThreadpoolWork;
        if ( !ThreadpoolWork )
        {
          v14 = GetLastError();
          v7 = (unsigned __int16)v14 | 0x80070000;
          if ( v14 <= 0 )
            v7 = v14;
        }
      }
    }
    if ( v7 >= 0 )
      *a2 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
