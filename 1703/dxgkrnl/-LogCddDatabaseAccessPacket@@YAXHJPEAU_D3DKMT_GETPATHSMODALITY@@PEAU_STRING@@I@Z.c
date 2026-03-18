/*
 * XREFs of ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C00A100C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

void __fastcall LogCddDatabaseAccessPacket(
        int a1,
        int a2,
        struct _D3DKMT_GETPATHSMODALITY *a3,
        struct _STRING *a4,
        unsigned int a5)
{
  unsigned int v9; // r14d
  _DWORD *v10; // rax
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // rbx

  v9 = 144 * *((unsigned __int16 *)a3 + 10) + a4->Length + 73;
  v10 = operator new(v9, 0x63644356u, PagedPool);
  v11 = 0;
  v12 = v10;
  if ( v10 )
  {
    memset(v10, 0, v9);
    *v12 = 35;
    v12[1] = v9;
    v12[10] = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    v12[13] = a5;
    v12[12] = a2;
    v12[14] = a1;
    v12[15] = *((unsigned __int16 *)a3 + 10);
    if ( *((_WORD *)a3 + 10) )
    {
      do
      {
        v13 = v11++;
        v14 = 18 * v13;
        *(_QWORD *)&v12[2 * v14 + 18] = *((_QWORD *)a3 + 33 * v13 + 6);
        *(_QWORD *)&v12[2 * v14 + 20] = *((_QWORD *)a3 + 33 * v13 + 7);
        *(_QWORD *)&v12[2 * v14 + 22] = *((_QWORD *)a3 + 33 * v13 + 8);
        v12[2 * v14 + 24] = *((_DWORD *)a3 + 66 * v13 + 18);
        v12[2 * v14 + 25] = *((_DWORD *)a3 + 66 * v13 + 19);
        *(_QWORD *)&v12[2 * v14 + 26] = *((_QWORD *)a3 + 33 * v13 + 15);
        *(_QWORD *)&v12[2 * v14 + 28] = *(_QWORD *)((char *)a3 + 264 * v13 + 84);
        *(_QWORD *)&v12[2 * v14 + 30] = *(_QWORD *)((char *)a3 + 264 * v13 + 92);
        *(_QWORD *)&v12[2 * v14 + 32] = *(_QWORD *)((char *)a3 + 264 * v13 + 100);
        *(_QWORD *)&v12[2 * v14 + 34] = *(_QWORD *)((char *)a3 + 264 * v13 + 108);
        v12[2 * v14 + 36] = *((_DWORD *)a3 + 66 * v13 + 20);
        v12[2 * v14 + 37] = (int)(*((_DWORD *)a3 + 66 * v13 + 32) << 29) >> 29;
        v12[2 * v14 + 38] = *((_DWORD *)a3 + 66 * v13 + 34);
        v12[2 * v14 + 39] = *((_DWORD *)a3 + 66 * v13 + 35);
        *(_OWORD *)&v12[2 * v14 + 40] = *(_OWORD *)((char *)a3 + 264 * v13 + 144);
        *(_OWORD *)&v12[2 * v14 + 44] = *(_OWORD *)((char *)a3 + 264 * v13 + 160);
        v12[2 * v14 + 48] = *((_DWORD *)a3 + 66 * v13 + 45);
        v12[2 * v14 + 49] = *((_DWORD *)a3 + 66 * v13 + 46);
        v12[2 * v14 + 50] = *((_DWORD *)a3 + 66 * v13 + 47);
        *(_QWORD *)&v12[2 * v14 + 51] = *((_QWORD *)a3 + 33 * v13 + 24);
      }
      while ( v11 < *((unsigned __int16 *)a3 + 10) );
    }
    v15 = (char *)&v12[36 * *((unsigned __int16 *)a3 + 10) + 18];
    memmove(v15, a4->Buffer, a4->Length);
    v12[16] = (_DWORD)v15 - (_DWORD)v12;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12);
    ExFreePoolWithTag(v12, 0);
  }
}
