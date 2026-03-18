/*
 * XREFs of MiRebuildPageTableLeafAges @ 0x14005C020
 * Callers:
 *     MiFreeWsleList @ 0x140052390 (MiFreeWsleList.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiRebuildPageTableLeafAges(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // r9
  __int64 PteShadow; // rax
  __int64 v4; // r9
  __int64 *v5; // r10
  __int64 v6; // rbx
  unsigned __int64 result; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // r9
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned __int8 v13; // al
  unsigned __int8 v14; // cl
  int v15; // edx
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[4]; // [rsp+28h] [rbp-40h] BYREF

  v2 = (__int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v2;
  if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v2, *v2);
  v16 = PteShadow;
  v5 = (__int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v16) - 0x58000000000LL);
  v6 = *v5;
  result = (unsigned __int64)*v5 >> 4;
  if ( (result & 0x3FF) == 0 )
  {
    v8 = 0LL;
    v9 = v4 << 25 >> 16;
    memset(v17, 0, sizeof(v17));
    do
    {
      v10 = *(_QWORD *)v9;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
        LOBYTE(v10) = MiReadPteShadow(v9, *(_QWORD *)v9);
      if ( (v10 & 1) != 0 )
      {
        v11 = (__int64 *)(((((__int64)((v9 << 25) - v8) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        v12 = *v11;
        if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
          v12 = MiReadPteShadow(v11, *v11);
        if ( (v12 & 1) != 0 )
          v13 = HIBYTE(v12) & 0xF;
        else
          v13 = 10;
        if ( (unsigned __int8)(v13 - 8) > 2u )
          ++*((_DWORD *)v17 + v13);
      }
      v9 += 8LL;
    }
    while ( (v9 & 0xFFF) != 0 );
    v14 = 8;
    while ( 1 )
    {
      result = --v14;
      v15 = *((_DWORD *)v17 + v14);
      if ( v15 )
        break;
      if ( !v14 )
        return result;
    }
    result = v6 & 0xFFFFFFFFFFFE000FuLL | (16 * (v15 & 0x3FF | ((unsigned __int64)(v14 & 7) << 10)));
    *v5 = result;
  }
  return result;
}
