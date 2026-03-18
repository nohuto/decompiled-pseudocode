/*
 * XREFs of WmipRemoveDS @ 0x14057F694
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1401240E0 (WmipDeregisterRegEntry.c)
 * Callees:
 *     WmipGenerateRegistrationNotification @ 0x14051C120 (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 */

__int64 __fastcall WmipRemoveDS(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    WmipGenerateRegistrationNotification(*(_QWORD *)(a1 + 32), 2u);
    *(_DWORD *)(v1 + 16) |= 1u;
    return WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v1);
  }
  return result;
}
