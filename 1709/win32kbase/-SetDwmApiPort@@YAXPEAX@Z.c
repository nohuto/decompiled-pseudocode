/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C007B0B4
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007AADC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1)
{
  if ( !a1 && g_pDwmApiPort )
    ObfDereferenceObject(g_pDwmApiPort);
  g_pDwmApiPort = a1;
}
