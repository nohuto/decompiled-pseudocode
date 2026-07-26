/*
 * XREFs of ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x1C00F4F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 */

void __fastcall NdisPDAssociateNotificationEvent(struct _NDIS_PD_QUEUE *a1, struct _KEVENT *a2)
{
  _QWORD *v2; // rbx

  v2 = a1->PDPlatformReserved[1];
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, a2);
  if ( !*((_BYTE *)v2 + 60) || *((_BYTE *)v2 + 61) || v2[8] )
    ndisBugCheckEx(0x23uLL, 2uLL, (ULONG_PTR)v2, *(_QWORD *)(*(_QWORD *)(v2[4] + 56LL) + 80LL));
  v2[8] = a2;
}
