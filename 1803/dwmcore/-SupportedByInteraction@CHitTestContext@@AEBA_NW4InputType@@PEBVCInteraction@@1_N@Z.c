/*
 * XREFs of ?SupportedByInteraction@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@1_N@Z @ 0x1800265B0
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I@Z @ 0x1800283F0 (-SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I@Z.c)
 *     ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180028410 (-SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHitTestContext::SupportedByInteraction(__int64 a1, int a2, _BYTE *a3, __int64 a4, char a5)
{
  char v7; // bl
  __int64 (__fastcall *v8)(_BYTE *, __int64); // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 (__fastcall *v11)(_BYTE *, __int64, __int64); // rax
  int v12; // eax
  int v13; // eax

  if ( a2 == 5 )
  {
    v7 = 0;
    if ( (*(_DWORD *)(a1 + 100) & 0xF8000) == 0 || (a3[184] & 2) == 0 || !a5 || a4 )
    {
      v8 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a3 + 80LL);
      v9 = (char *)v8 == (char *)CInteraction::SupportsPointerType
         ? CInteraction::SupportsPointerType(a3, 5LL)
         : v8(a3, 5LL);
      if ( v9
        || ((v10 = *(unsigned int *)(a1 + 100),
             v11 = *(__int64 (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)a3 + 88LL),
             (char *)v11 != (char *)CInteraction::SupportsInteractionType)
          ? (v12 = v11(a3, 5LL, v10))
          : (v12 = CInteraction::SupportsInteractionType(a3, 5LL, v10)),
            v12) )
      {
        v7 = 1;
      }
    }
    LOBYTE(v13) = v7;
  }
  else if ( a2 != 4
         || !*(_DWORD *)(a1 + 104)
         || (v13 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a3 + 88LL))(a3)) != 0 )
  {
    LOBYTE(v13) = 1;
  }
  return v13;
}
