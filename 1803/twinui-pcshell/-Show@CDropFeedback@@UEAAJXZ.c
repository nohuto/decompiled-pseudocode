/*
 * XREFs of ?Show@CDropFeedback@@UEAAJXZ @ 0x1802EF080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropFeedback::Show(HWND *this)
{
  unsigned int v1; // r14d
  __int64 v3; // rdx
  unsigned int i; // esi
  HWND v5; // rbx
  HWND v6; // rcx
  __int64 v7; // rcx
  int pvAttribute; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0;
  pvAttribute = 1;
  DwmSetWindowAttribute(this[5], 0xDu, &pvAttribute, 4u);
  ShowWindow(this[5], 4);
  if ( ((_BYTE)this[12] & 1) != 0 )
  {
    if ( SetForegroundWindow(this[5]) )
    {
      if ( ((_BYTE)this[12] & 2) != 0 && GetKeyState(91) >= 0 && (GetKeyState(92) & 0x8000) == 0 )
        PostMessageW(this[5], 0x101u, 0x5BuLL, 0LL);
    }
    else
    {
      v1 = -2147019873;
    }
  }
  (*(void (__fastcall **)(HWND, GUID *))(*(_QWORD *)this[15] + 24LL))(this[15], &GUID_NULL);
  (*(void (__fastcall **)(HWND, unsigned int *))(*(_QWORD *)this[13] + 24LL))(this[13], &v10);
  for ( i = 0; i < v10; ++i )
  {
    v11 = 0LL;
    v5 = this[13];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( (*(int (__fastcall **)(HWND, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 32LL))(
           v5,
           i,
           &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810,
           &v11) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 72LL))(v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  LOBYTE(v3) = 1;
  (*(void (__fastcall **)(HWND, __int64))(*(_QWORD *)this[15] + 32LL))(this[15], v3);
  v6 = this[5];
  pvAttribute = 0;
  DwmSetWindowAttribute(v6, 0xDu, &pvAttribute, 4u);
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0(v7, (__int64)&DropFeedback_Show_Info);
  return v1;
}
