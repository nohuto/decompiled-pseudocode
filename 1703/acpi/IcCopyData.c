/*
 * XREFs of IcCopyData @ 0x1C00845B4
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0084668 (AcpiIrqLibSetupSciInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcCopyData(int a1)
{
  __int64 i; // r8
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  unsigned int v8; // r10d
  __int64 v9; // rdx
  unsigned int v10; // r9d
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v8 = 0;
      v10 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        v9 = i + 136;
        do
        {
          if ( a1 == 1 )
          {
            v12 = *(_OWORD *)(v9 - 88);
            v13 = *(_OWORD *)(v9 - 72);
            *(_DWORD *)(v9 - 100) = *(_DWORD *)(v9 - 104);
            v14 = *(_DWORD *)(v9 - 96);
            *(_OWORD *)v9 = v12;
            *(_DWORD *)(v9 - 92) = v14;
            v15 = *(_OWORD *)(v9 - 56);
            LOBYTE(v14) = *(_BYTE *)(v9 + 88);
            *(_OWORD *)(v9 + 16) = v13;
            *(_BYTE *)(v9 + 89) = v14;
            v16 = *(_OWORD *)(v9 - 40);
            *(_OWORD *)(v9 + 32) = v15;
            v17 = *(_OWORD *)(v9 - 24);
            *(_OWORD *)(v9 + 48) = v16;
            *(_QWORD *)&v16 = *(_QWORD *)(v9 - 8);
            *(_OWORD *)(v9 + 64) = v17;
            *(_QWORD *)(v9 + 80) = v16;
            *(_DWORD *)v9 = 0;
            *(_DWORD *)(v9 + 56) = v8 + *(_DWORD *)(i + 16);
          }
          else
          {
            v2 = *(_OWORD *)v9;
            v3 = *(_OWORD *)(v9 + 16);
            *(_DWORD *)(v9 - 104) = *(_DWORD *)(v9 - 100);
            v4 = *(_DWORD *)(v9 - 92);
            *(_OWORD *)(v9 - 88) = v2;
            *(_DWORD *)(v9 - 96) = v4;
            v5 = *(_OWORD *)(v9 + 32);
            LOBYTE(v4) = *(_BYTE *)(v9 + 89);
            *(_OWORD *)(v9 - 72) = v3;
            *(_BYTE *)(v9 + 88) = v4;
            v6 = *(_OWORD *)(v9 + 48);
            *(_OWORD *)(v9 - 56) = v5;
            v7 = *(_OWORD *)(v9 + 64);
            *(_OWORD *)(v9 - 40) = v6;
            *(_QWORD *)&v6 = *(_QWORD *)(v9 + 80);
            *(_OWORD *)(v9 - 24) = v7;
            *(_QWORD *)(v9 - 8) = v6;
          }
          ++v8;
          v9 += 200LL;
        }
        while ( v8 < v10 );
      }
    }
  }
  return 0LL;
}
