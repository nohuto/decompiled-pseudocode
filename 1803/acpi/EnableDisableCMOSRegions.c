/*
 * XREFs of EnableDisableCMOSRegions @ 0x1C001791C
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C001791C (EnableDisableCMOSRegions.c)
 *     ACPITableLoad @ 0x1C003B1B0 (ACPITableLoad.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     EnableDisableCMOSRegions @ 0x1C001791C (EnableDisableCMOSRegions.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIGetFirstChild @ 0x1C00439BC (AMLIGetFirstChild.c)
 *     AMLIIsNamedChildPresent @ 0x1C0043DAC (AMLIIsNamedChildPresent.c)
 *     AMLIIterateSiblingsNext @ 0x1C0043EB0 (AMLIIterateSiblingsNext.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(_QWORD *a1, unsigned __int8 a2)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // bp
  __int64 i; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rbp
  int v10; // eax
  __int64 v11; // rbx
  _QWORD v13[13]; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+B0h] [rbp+18h]

  v2 = 0;
  v3 = a2;
  for ( i = AMLIGetFirstChild(a1); ; i = AMLIIterateSiblingsNext(v11) )
  {
    v11 = i;
    if ( !i )
      break;
    v7 = *(unsigned __int16 *)(*(_QWORD *)i + 66LL);
    if ( v7 == 6 )
    {
      LOBYTE(v6) = v3;
      v10 = EnableDisableCMOSRegions(v11, v6);
      if ( v10 < 0 )
        v2 = v10;
    }
    else if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 12) == 5 && (unsigned __int8)AMLIIsNamedChildPresent(a1, 1145653343LL) )
        {
          v9 = AMLIGetNamedChild(a1, 1195725407);
          if ( v9 )
          {
            memset(v13, 0, 0x50uLL);
            WORD1(v13[0]) = 1;
            WORD1(v13[5]) = 1;
            v13[2] = 5LL;
            v13[7] = a2;
            v15 = AMLIAsyncEvalObject(v9, 0LL, 2LL, v13, 0LL, 0LL);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
            v3 = a2;
            if ( v15 < 0 )
              v2 = v15;
          }
          else
          {
            v3 = a2;
          }
        }
      }
    }
  }
  return v2;
}
