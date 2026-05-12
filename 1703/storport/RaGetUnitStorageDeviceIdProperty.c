/*
 * XREFs of RaGetUnitStorageDeviceIdProperty @ 0x1C006133C
 * Callers:
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C00612CC (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 * Callees:
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaGetUnitStorageDeviceIdProperty(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r12d
  __int64 v5; // rdi
  unsigned int *v6; // r15
  unsigned int *v8; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  int *v11; // r15
  __int64 v12; // rcx
  unsigned __int16 v13; // dx
  __int16 v14; // ax
  unsigned int *v15; // rax

  v3 = *a3;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 128);
  v6 = a3;
  if ( *a3 < 8 )
    return 3221225485LL;
  memset(a2, 0, v3);
  *a2 = 16;
  v8 = a2 + 1;
  a2[1] = 12;
  v9 = 0;
  v10 = *(unsigned __int8 *)(v5 + 3) | (*(unsigned __int8 *)(v5 + 2) << 8);
  if ( v10 )
  {
    v11 = (int *)(a2 + 3);
    do
    {
      v12 = v9;
      ++v4;
      v13 = (*(unsigned __int8 *)(v9 + v5 + 7) + 20) & 0xFFFC;
      *v8 += v13;
      if ( *v8 <= v3 )
      {
        *v11 = *(_BYTE *)(v9 + v5 + 4) & 0xF;
        v11[1] = *(_BYTE *)(v9 + v5 + 5) & 0xF;
        v11[3] = (*(unsigned __int8 *)(v9 + v5 + 5) >> 4) & 3;
        v14 = *(unsigned __int8 *)(v9 + v5 + 7);
        *((_WORD *)v11 + 5) = v13;
        *((_WORD *)v11 + 4) = v14;
        memmove(v11 + 4, (const void *)(v9 + v5 + 8), *(unsigned __int8 *)(v9 + v5 + 7));
        v11 = (int *)((char *)v11 + *((unsigned __int16 *)v11 + 5));
        v12 = v9;
      }
      v9 += *(unsigned __int8 *)(v12 + v5 + 7) + 4;
    }
    while ( v9 < v10 );
    v6 = a3;
  }
  if ( v3 >= 0xC )
    a2[2] = v4;
  v15 = v6;
  if ( *v8 < v3 )
    v15 = a2 + 1;
  *v6 = *v15;
  return 0LL;
}
