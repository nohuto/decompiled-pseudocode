/*
 * XREFs of Control_EP_StartMapping @ 0x1C00241F0
 * Callers:
 *     <none>
 * Callees:
 *     TR_QueueDpcForTransferCompletion @ 0x1C0023648 (TR_QueueDpcForTransferCompletion.c)
 *     Control_MapTransfer @ 0x1C0024510 (Control_MapTransfer.c)
 */

void __fastcall Control_EP_StartMapping(__int64 a1)
{
  KIRQL v2; // bp
  char v3; // di
  KIRQL v4; // al
  __int64 v5; // rcx
  bool v6; // zf
  KSPIN_LOCK *v7; // rcx
  __int64 v8; // rdx

  v2 = 0;
  if ( KeGetCurrentIrql() )
  {
    v3 = 0;
  }
  else
  {
    v2 = KfRaiseIrql(2u);
    v3 = 1;
  }
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 344);
  *(_DWORD *)(a1 + 352) = 0;
  *(_DWORD *)(a1 + 356) = 0;
  *(_BYTE *)(a1 + 104) = v4;
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 112) == 3;
    v7 = (KSPIN_LOCK *)(a1 + 96);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 108) = 2;
      KeReleaseSpinLock(v7, v4);
      TR_QueueDpcForTransferCompletion((_QWORD *)a1);
    }
    else
    {
      *(_DWORD *)(a1 + 108) = 3;
      KeReleaseSpinLock(v7, v4);
      LOBYTE(v8) = v3;
      Control_MapTransfer(a1, v8);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 108) = 2;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  }
  if ( v3 )
    KeLowerIrql(v2);
}
