/*
 * XREFs of HmgReplaceObject @ 0x1C003EC10
 * Callers:
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C003E500 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z @ 0x1C0030BFC (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C0032E3C (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 */

__int64 __fastcall HmgReplaceObject(struct OBJECT *a1, __m128i *a2)
{
  unsigned int v4; // ebx
  __int16 v5; // dx
  __m128i v6; // xmm2
  __int16 v7; // r8
  GdiHandleManager *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v12[8]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  v4 = 1;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)v12, a1, 1);
  if ( HANDLELOCK::bValid((HANDLELOCK *)v12) )
  {
    v5 = *((_WORD *)a1 + 7);
    v6 = *a2;
    v7 = a2->m128i_i16[7];
    v14 = a2[1].m128i_i64[0];
    v8 = (GdiHandleManager *)(v7 & 0x8000 | v5 & 0x4000u);
    a2->m128i_i16[7] = (__int16)v8;
    v9 = *(_QWORD *)a1;
    *((_WORD *)a1 + 7) = v5 & 0x8000 | v7 & 0x4000;
    a2->m128i_i64[0] = v9;
    a2->m128i_i16[6] = *((_WORD *)a1 + 6);
    a2->m128i_i32[2] = *((_DWORD *)a1 + 2);
    a2[1].m128i_i64[0] = *((_QWORD *)a1 + 2);
    GdiHandleManager::SetEntryObject(
      v8,
      (unsigned __int16)*(_DWORD *)a1 | (*(_DWORD *)a1 >> 8) & 0xFF0000,
      (struct OBJECT *)a2);
    v10 = v14;
    *(_QWORD *)a1 = v6.m128i_i64[0];
    *((_QWORD *)a1 + 2) = v10;
    *((_WORD *)a1 + 6) = _mm_extract_epi16(v6, 6);
    *((_DWORD *)a1 + 2) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
    HANDLELOCK::vUnlock((HANDLELOCK *)v12);
  }
  else
  {
    v4 = 0;
  }
  if ( v13 )
    HANDLELOCK::vUnlock((HANDLELOCK *)v12);
  return v4;
}
