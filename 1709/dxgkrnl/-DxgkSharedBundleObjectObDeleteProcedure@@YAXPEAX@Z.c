/*
 * XREFs of ?DxgkSharedBundleObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01AF000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkSharedBundleObjectObDeleteProcedure(PVOID *a1)
{
  __int64 i; // rsi

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    ObfDereferenceObject(a1[i + 1]);
    a1[i + 1] = 0LL;
  }
}
