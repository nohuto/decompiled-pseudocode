/*
 * XREFs of CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180035998
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180035CC0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180008054 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _lambda_e9af1581bd6c783f369e35704f6cd4a0_::operator() @ 0x18003630C (_lambda_e9af1581bd6c783f369e35704f6cd4a0_--operator().c)
 */

__int64 __fastcall CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_e9af1581bd6c783f369e35704f6cd4a0___(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v4; // edi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  const struct tWAVEFORMATEX *v9; // rbx
  int v10; // edx
  __int64 v11; // xmm0_8
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int16 v15; // [rsp+30h] [rbp-28h]

  v4 = 0;
  if ( a3
    && (*((_QWORD *)a3 + 4) == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
     && *((_QWORD *)a3 + 5) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4
     || *((_QWORD *)a3 + 4) == *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
     && *((_QWORD *)a3 + 5) == *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
    && *((_QWORD *)a3 + 6) == *(_QWORD *)&GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data1
    && *((_QWORD *)a3 + 7) == *(_QWORD *)GUID_05589f81_c356_11ce_bf01_00aa0055595a.Data4
    && *a3 > 0x40 )
  {
    v7 = *a3 - 64LL;
    if ( v7 <= 0x28 )
    {
      v8 = 0x10000044000LL;
      if ( _bittest64(&v8, v7) )
      {
        v9 = (const struct tWAVEFORMATEX *)(a3 + 16);
        v13 = 0LL;
        v14 = 0LL;
        v15 = 0;
        if ( v7 == 14 )
        {
          v10 = *((unsigned __int16 *)a3 + 38);
          v11 = *(_QWORD *)&v9->wFormatTag;
          v9 = (const struct tWAVEFORMATEX *)&v13;
          LODWORD(v14) = a3[18];
          WORD2(v14) = v10;
          v13 = v11;
          v15 = 0;
          v7 = 18LL;
          HIWORD(v14) = 8 * v10 / (unsigned int)WORD1(v11);
        }
        if ( v7 >= (unsigned __int64)v9->cbSize + 18
          && (unsigned __int8)lambda_e9af1581bd6c783f369e35704f6cd4a0_::operator()(a2, v9) )
        {
          return (unsigned int)CloneWaveFormat(v9, a4);
        }
      }
    }
  }
  return v4;
}
