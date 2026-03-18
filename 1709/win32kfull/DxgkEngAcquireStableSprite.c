/*
 * XREFs of DxgkEngAcquireStableSprite @ 0x1C02518E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 */

void __fastcall DxgkEngAcquireStableSprite(__int64 a1, int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 HDEV; // rax
  __int64 v6; // rbx

  GreAcquireSemaphoreSharedInternal(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  v4 = 0;
  if ( a2 )
  {
    HDEV = UserGetHDEV(v3);
    v6 = HDEV;
    if ( HDEV )
    {
      if ( *(_DWORD *)(HDEV + 140) )
      {
        do
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(*(_QWORD *)(*(_QWORD *)(v6 + 144) + 8LL * v4++) + 200LL));
        while ( v4 < *(_DWORD *)(v6 + 140) );
      }
      else
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(HDEV + 200));
      }
    }
  }
}
