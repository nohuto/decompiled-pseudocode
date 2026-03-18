/*
 * XREFs of Simulator_TestNotifyRet @ 0x1C005C4D4
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     AMLIRegEventHandler @ 0x1C0011640 (AMLIRegEventHandler.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C005BAC0 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotifyRet(_DWORD *Argument1, int a2)
{
  if ( g_SimulatorCallbackObject )
  {
    Argument1[18] = a2;
    Argument1[2] = 2;
    ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
    return (unsigned int)Argument1[18];
  }
  else
  {
    __debugbreak();
    return 3221225473LL;
  }
}
