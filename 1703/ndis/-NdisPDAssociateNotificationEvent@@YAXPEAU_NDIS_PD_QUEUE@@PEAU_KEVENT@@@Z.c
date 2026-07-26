/*
 * XREFs of ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C00EB9C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 */

void __fastcall NdisPDAssociateNotificationEvent(struct _NDIS_PD_QUEUE *a1, struct _KEVENT *a2)
{
  ULONG_PTR v2; // rbx

  v2 = *((_QWORD *)a1 + 3);
  if ( (unsigned __int8)byte_1C0092624 >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, a2);
  if ( !*(_BYTE *)(v2 + 60) || *(_BYTE *)(v2 + 61) || *(_QWORD *)(v2 + 64) )
    ndisBugCheckEx(0x23uLL, 2uLL, v2, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 56LL) + 80LL));
  *(_QWORD *)(v2 + 64) = a2;
}
