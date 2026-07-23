/*
 * XREFs of SbpDetermineDllContext @ 0x180020CFC
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800210F4 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     SbGetContextDetailsByVersion @ 0x180020354 (SbGetContextDetailsByVersion.c)
 *     SbGetContextDetailsById @ 0x180020E68 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x180021334 (SbGetContextDetailsByGuid.c)
 *     RtlImageNtHeader @ 0x18002AA40 (RtlImageNtHeader.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007FB7C (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned int v2; // ebx
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v9; // r15
  int *v10; // rdi
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF

  v2 = 0;
  v13[1] = 512LL;
  v11 = 0LL;
  v13[0] = 0LL;
  v12 = 0LL;
  if ( a2 && ActivationContext )
  {
    v5 = RtlImageNtHeader(ActivationContext);
    LOWORD(v6) = v5->OptionalHeader.MajorSubsystemVersion;
    LOWORD(v7) = v5->OptionalHeader.MinorSubsystemVersion;
    SbGetContextDetailsById(4LL, &v11);
    if ( (unsigned __int16)v6 > *(_WORD *)(v11 + 20)
      || (_WORD)v6 == *(_WORD *)(v11 + 20) && (unsigned __int16)v7 >= *(_WORD *)(v11 + 22) )
    {
      *a2 = v11;
    }
    else
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(ActivationContext) && &v14 )
      {
        v7 = ((unsigned __int16)v6 << 16) + (unsigned __int16)v7;
        if ( v14 )
        {
          v9 = v14;
          v10 = &v15;
          do
          {
            if ( v10[4] == 1
              && (unsigned int)SbGetContextDetailsByGuid(v10, &v12)
              && *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16) >= v7 )
            {
              v7 = *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16);
            }
            v10 += 5;
            --v9;
          }
          while ( v9 );
        }
        v6 = HIWORD(v7);
      }
      SbGetContextDetailsByVersion(v6, v7, v13);
      *a2 = v13[0];
    }
    return 1;
  }
  return v2;
}
