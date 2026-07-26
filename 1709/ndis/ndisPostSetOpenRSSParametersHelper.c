/*
 * XREFs of ndisPostSetOpenRSSParametersHelper @ 0x1C00242E8
 * Callers:
 *     ndisPostSetOpenRSSParameters @ 0x1C001CB48 (ndisPostSetOpenRSSParameters.c)
 *     ?ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C007AD40 (-ndisPostSetOpenRSSv2Parameters@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 */

void __fastcall ndisPostSetOpenRSSParametersHelper(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // esi
  KSPIN_LOCK *v8; // rbx
  KSPIN_LOCK *v9; // rcx
  int v10; // r12d
  __int16 v11; // r13
  KIRQL v12; // al
  __int64 v13; // rbp
  _DWORD *v14; // rcx
  void *v15; // rcx
  int v16; // ebx
  KIRQL NewIrql; // [rsp+50h] [rbp+8h]

  v6 = *(_DWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 12);
  if ( *(_BYTE *)(a3 + 1) < 2u )
    v7 = 0;
  else
    v7 = *(_DWORD *)(a3 + 28) + *(_DWORD *)(a3 + 32) * *(_DWORD *)(a3 + 36);
  v8 = (KSPIN_LOCK *)(a1 + 96);
  v9 = (KSPIN_LOCK *)(a1 + 96);
  if ( v6 <= *(_DWORD *)(a3 + 24) + (unsigned int)*(unsigned __int16 *)(a3 + 20) )
    v6 = *(_DWORD *)(a3 + 24) + *(unsigned __int16 *)(a3 + 20);
  if ( v6 > v7 )
    v7 = v6;
  v10 = (unsigned __int8)*(_DWORD *)(a3 + 8);
  v11 = *(_WORD *)(a3 + 4) & 0x10;
  v12 = KeAcquireSpinLockRaiseToDpc(v9);
  v13 = *(_QWORD *)(a1 + 56);
  NewIrql = v12;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2306355;
  if ( v13 )
  {
    do
    {
      v14 = *(_DWORD **)(v13 + 488);
      if ( v14 && v13 != a2 )
      {
        if ( !v10 || v11 )
        {
          *(_QWORD *)(v13 + 488) = 0LL;
        }
        else
        {
          v16 = v14[2] & 0xFFFF00;
          memmove(v14, (const void *)a3, v7);
          *(_DWORD *)(*(_QWORD *)(v13 + 488) + 8LL) = v10 | v16;
        }
      }
      v13 = *(_QWORD *)(v13 + 392);
    }
    while ( v13 );
    v8 = (KSPIN_LOCK *)(a1 + 96);
  }
  if ( !v10 || v11 )
  {
    *(_QWORD *)(a2 + 488) = 0LL;
  }
  else
  {
    v15 = *(void **)(a2 + 480);
    *(_QWORD *)(a2 + 488) = v15;
    memmove(v15, (const void *)a3, v7);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock(v8, NewIrql);
}
