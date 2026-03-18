/*
 * XREFs of ScrubDelegatedWindow @ 0x1C0080100
 * Callers:
 *     ?ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C008002C (-ScrubDelegatedWindows@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     CleanupInputDelegation @ 0x1C00800C0 (CleanupInputDelegation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScrubDelegatedWindow(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_DWORD *)(a1 + 336) = 0;
  --*(_DWORD *)(v1 + 1128);
  --*(_DWORD *)(v3 + 1128);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
  if ( *(_QWORD *)(v4 + 104) == a1 && (int)IsClearDelegationCaptureSupported(v4) >= 0 )
    ClearDelegationCapture(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL));
  if ( *(_DWORD *)(v3 + 1128) )
    return 0LL;
  *(_DWORD *)(v3 + 1096) &= ~0x2000u;
  result = 1LL;
  *(_QWORD *)(v3 + 1112) = 0LL;
  *(_QWORD *)(v3 + 1120) = 0LL;
  *(_DWORD *)(v3 + 440) &= 0xFFFFFF3F;
  return result;
}
