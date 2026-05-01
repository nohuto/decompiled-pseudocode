/*
 * XREFs of ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x18004CE4C
 * Callers:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18004F740 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x18011812C (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IUnknown_GetServerProcessHandle(struct IUnknown *a1, DWORD a2, void **a3)
{
  signed int v5; // ebx
  __int64 v6; // rcx
  HANDLE v7; // rax
  signed int LastError; // eax
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  dwProcessId = 0;
  v11 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_5524fe34_8da7_40a8_8165_e8b37a8b4a4b,
         &v11);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v11 + 24LL))(v11, &dwProcessId);
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 >= 0 )
  {
    v7 = OpenProcess(a2, 0, dwProcessId);
    *a3 = v7;
    if ( v7 )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = LastError;
      if ( v5 >= 0 )
        return (unsigned int)-2147467259;
    }
  }
  return (unsigned int)v5;
}
