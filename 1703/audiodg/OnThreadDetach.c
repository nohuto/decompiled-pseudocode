/*
 * XREFs of OnThreadDetach @ 0x14003B640
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEngineThreadPriority@@YAJPEAPEAX@Z @ 0x140046B10 (-ResetEngineThreadPriority@@YAJPEAPEAX@Z.c)
 */

void __fastcall OnThreadDetach(PVOID lpFlsData)
{
  DWORD v1; // ebx
  void *Value; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned int)lpFlsData;
  Value = TlsGetValue((DWORD)lpFlsData);
  if ( Value )
  {
    if ( (int)ResetEngineThreadPriority(&Value) >= 0 )
      TlsSetValue(v1, 0LL);
  }
}
