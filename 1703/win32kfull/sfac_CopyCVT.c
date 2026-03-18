/*
 * XREFs of sfac_CopyCVT @ 0x1C02C9720
 * Callers:
 *     fsg_RunPreProgram @ 0x1C02C8584 (fsg_RunPreProgram.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_CopyCVT(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // edi
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v5 = 0;
  result = sfac_GetDataPtr(a1, 0, -1, 4, 0, (__int64)&v10);
  if ( !(_DWORD)result )
  {
    v7 = *(_DWORD *)(a1 + 60);
    if ( !v7 )
      goto LABEL_7;
    v8 = v7 / 2;
    if ( v8 > 0 )
    {
      v9 = v10;
      v5 = v8;
      do
      {
        *(_DWORD *)(a2 + 4 * v2) = (__int16)__ROR2__(*(_WORD *)(v9 + 2 * v2), 8);
        ++v2;
      }
      while ( v2 < v8 );
    }
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    if ( v5 < 256 )
LABEL_7:
      memset((void *)(a2 + 4LL * v5), 0, 4LL * (256 - v5));
    return 0LL;
  }
  return result;
}
