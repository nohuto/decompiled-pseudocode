/*
 * XREFs of ACPIAmliEvaluatePcch @ 0x1C0074AAC
 * Callers:
 *     ACPIPccLegacyInitialize @ 0x1C007EEB4 (ACPIPccLegacyInitialize.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     AcpiParseGenRegDesc @ 0x1C0074C00 (AcpiParseGenRegDesc.c)
 */

__int64 __fastcall ACPIAmliEvaluatePcch(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v8; // rdi
  int v9; // ebx
  __int64 v10; // r11
  __int64 v11; // rcx
  bool v12; // zf
  int v13; // eax
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // r11
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = AMLIGetNamedChild(a1, 1212367696);
  if ( v8 )
  {
    memset(v18, 0, 0x28uLL);
    v9 = AMLIEvalNameSpaceObject(v8, v18, 0, 0LL);
    if ( v9 < 0 )
    {
LABEL_17:
      AMLIDereferenceHandleEx((volatile signed __int32 *)v8);
      return (unsigned int)v9;
    }
    if ( WORD1(v18[0]) == 4 )
    {
      v10 = v18[4];
      if ( *(_DWORD *)v18[4] == 4 && *(_WORD *)(v18[4] + 10LL) == 3 && *(_DWORD *)(v18[4] + 32LL) >= 0x2Eu )
      {
        v11 = *(_QWORD *)(v18[4] + 40LL);
        if ( *(_BYTE *)v11 == 0x8A )
        {
          v12 = *(_WORD *)(v18[4] + 50LL) == 3;
          v13 = *(_DWORD *)(v11 + 40);
          v14 = *(_OWORD *)(v11 + 16);
          *(_OWORD *)a2 = *(_OWORD *)v11;
          v15 = *(_QWORD *)(v11 + 32);
          *(_OWORD *)(a2 + 16) = v14;
          *(_QWORD *)(a2 + 32) = v15;
          *(_DWORD *)(a2 + 40) = v13;
          *(_WORD *)(a2 + 44) = *(_WORD *)(v11 + 44);
          if ( v12 && *(_DWORD *)(v10 + 72) >= 0xCu )
          {
            v9 = AcpiParseGenRegDesc(*(_QWORD *)(v10 + 80), a3);
            if ( v9 < 0 )
            {
LABEL_16:
              AMLIFreeDataBuffs((__int64)v18);
              goto LABEL_17;
            }
            if ( *(_WORD *)(v16 + 90) == 1 )
            {
              *a4 = *(_QWORD *)(v16 + 104);
              if ( *(_WORD *)(v16 + 130) == 1 )
              {
                *a5 = *(_QWORD *)(v16 + 144);
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    v9 = -1072431096;
    goto LABEL_16;
  }
  return (unsigned int)-1073741823;
}
