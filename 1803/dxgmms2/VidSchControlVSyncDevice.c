/*
 * XREFs of VidSchControlVSyncDevice @ 0x1C0056E00
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0005D0C (VidSchiSetFlipDevice.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0057A8C (VidSchiCreateDeviceInternal.c)
 *     VidSchTerminateDevice @ 0x1C0078CB0 (VidSchTerminateDevice.c)
 * Callees:
 *     VidSchControlVSyncAdapter @ 0x1C0056ED0 (VidSchControlVSyncAdapter.c)
 */

__int64 __fastcall VidSchControlVSyncDevice(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v7; // r15
  struct _ERESOURCE *v8; // r14
  __int64 v9; // r8
  int v10; // eax
  __int64 v12; // rax

  v3 = 0;
  v4 = (int)a2;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = (struct _ERESOURCE *)(a1 + 952);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 952), 1u);
    if ( a3 )
    {
      v10 = *(_DWORD *)(a1 + 1056);
    }
    else
    {
      if ( (_DWORD)v4 != 4 )
        --*(_DWORD *)(a1 + 4 * v4 + 1060);
      v10 = *(_DWORD *)(a1 + 1056) - 1;
      *(_DWORD *)(a1 + 1056) = v10;
    }
    if ( !v10 )
    {
      LOBYTE(v9) = a3;
      v3 = VidSchControlVSyncAdapter(v7, 0LL, v9);
    }
    if ( a3 && v3 >= 0 )
    {
      ++*(_DWORD *)(a1 + 1056);
      if ( (_DWORD)v4 != 4 )
        ++*(_DWORD *)(a1 + 4 * v4 + 1060);
    }
    ExReleaseResourceLite(v8);
    return (unsigned int)v3;
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v12);
    return 0LL;
  }
}
