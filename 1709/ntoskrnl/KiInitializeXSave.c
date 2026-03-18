/*
 * XREFs of KiInitializeXSave @ 0x140428670
 * Callers:
 *     KiSystemStartup @ 0x140423010 (KiSystemStartup.c)
 * Callees:
 *     KiGetXSaveSupportedFeatures @ 0x1401509B0 (KiGetXSaveSupportedFeatures.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiUpdateXSaveSizeAndVolatileFeatures @ 0x14042888C (KiUpdateXSaveSizeAndVolatileFeatures.c)
 *     KiIntersectFeaturesWithPolicy @ 0x140428908 (KiIntersectFeaturesWithPolicy.c)
 *     KiParseLoadOptions @ 0x140428B38 (KiParseLoadOptions.c)
 */

ULONG_PTR __fastcall KiInitializeXSave(__int64 a1, int a2)
{
  ULONG_PTR result; // rax
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  ULONG_PTR v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  _OWORD *v11; // r8
  __int128 v12; // xmm1
  ULONG_PTR BugCheckParameter1[102]; // [rsp+30h] [rbp-D0h] BYREF

  if ( !a2 )
    KiParseLoadOptions(*(_QWORD *)(a1 + 216));
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  KiGetXSaveSupportedFeatures((__int64)BugCheckParameter1);
  if ( a2 )
  {
    if ( (BugCheckParameter1[0] & MEMORY[0xFFFFF780000003D8]) != MEMORY[0xFFFFF780000003D8]
      || (result = BugCheckParameter1[67] & MEMORY[0xFFFFF780000005F0],
          (BugCheckParameter1[67] & MEMORY[0xFFFFF780000005F0]) != MEMORY[0xFFFFF780000005F0])
      || (BugCheckParameter1[2] & 0x100000000LL) == 0
      && (result = MEMORY[0xFFFFF780000003EC], (MEMORY[0xFFFFF780000003EC] & 1) != 0)
      || (BugCheckParameter1[2] & 0x200000000LL) == 0
      && (result = MEMORY[0xFFFFF780000003EC], (MEMORY[0xFFFFF780000003EC] & 2) != 0) )
    {
      KeBugCheckEx(0x3Eu, (ULONG_PTR)BugCheckParameter1, 0xFFFFF780000003D8uLL, 1uLL, 0LL);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 240);
    v6 = *(_DWORD *)(v5 + 2520);
    if ( BugCheckParameter1[0] )
    {
      v7 = *(_QWORD *)(v5 + 2512);
      BugCheckParameter1[67] &= v7;
      v8 = v7 & BugCheckParameter1[0];
      v9 = HIDWORD(BugCheckParameter1[2]);
      BugCheckParameter1[0] = v8;
      if ( (v6 & 0x10) == 0 )
      {
        v9 = HIDWORD(BugCheckParameter1[2]) & 0xFFFFFFFD;
        HIDWORD(BugCheckParameter1[2]) &= ~2u;
      }
      if ( (v6 & 8) == 0 )
        HIDWORD(BugCheckParameter1[2]) = v9 & 0xFFFFFFFE;
    }
    KiIntersectFeaturesWithPolicy(a1, BugCheckParameter1);
    if ( KeTestRemovedFeatureMask )
    {
      BugCheckParameter1[0] &= ~KeTestRemovedFeatureMask;
      BugCheckParameter1[67] &= ~KeTestRemovedFeatureMask;
    }
    if ( KeTestDisableXSave )
    {
      BugCheckParameter1[0] = 0LL;
      BugCheckParameter1[67] = 0LL;
      HIDWORD(BugCheckParameter1[2]) &= 0xFFFFFFFC;
    }
    KiUpdateXSaveSizeAndVolatileFeatures(BugCheckParameter1);
    v10 = 6LL;
    result = (ULONG_PTR)BugCheckParameter1;
    v11 = (_OWORD *)0xFFFFF780000003D8LL;
    do
    {
      *v11 = *(_OWORD *)result;
      v11[1] = *(_OWORD *)(result + 16);
      v11[2] = *(_OWORD *)(result + 32);
      v11[3] = *(_OWORD *)(result + 48);
      v11[4] = *(_OWORD *)(result + 64);
      v11[5] = *(_OWORD *)(result + 80);
      v11[6] = *(_OWORD *)(result + 96);
      v11 += 8;
      v12 = *(_OWORD *)(result + 112);
      result += 128LL;
      *(v11 - 1) = v12;
      --v10;
    }
    while ( v10 );
    *v11 = *(_OWORD *)result;
    v11[1] = *(_OWORD *)(result + 16);
    v11[2] = *(_OWORD *)(result + 32);
    if ( BugCheckParameter1[0] )
    {
      result = MEMORY[0xFFFFF78000000600];
      KeXStateLength = MEMORY[0xFFFFF78000000600];
    }
  }
  return result;
}
