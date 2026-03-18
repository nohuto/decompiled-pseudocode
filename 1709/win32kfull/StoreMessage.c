/*
 * XREFs of StoreMessage @ 0x1C0113BF0
 * Callers:
 *     xxxDoPaint @ 0x1C009FBB4 (xxxDoPaint.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00A8320 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 * Callees:
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 */

__int64 __fastcall StoreMessage(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rax
  __int64 result; // rax

  if ( a2 )
    v8 = *a2;
  else
    v8 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = v8;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  result = LogicalQmsgCursorPos((__int64)a2, *(_QWORD *)(a7 + 408));
  *(_QWORD *)(a1 + 36) = result;
  return result;
}
