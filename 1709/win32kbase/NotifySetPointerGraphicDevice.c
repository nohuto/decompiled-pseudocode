/*
 * XREFs of NotifySetPointerGraphicDevice @ 0x1C0092F50
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NotifySetPointerGraphicDevice(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v2 )
  {
    v3 = v2 + 3024;
    RIMLockExclusive(v2 + 3024);
    if ( *(_BYTE *)(v3 + 16) && a1 > 0 )
    {
      if ( a1 <= 2 )
      {
        if ( *(_BYTE *)(v3 + 17) )
          *(_BYTE *)(v3 + 17) = 0;
      }
      else if ( a1 == 3 )
      {
        *(_BYTE *)(v3 + 17) = 1;
      }
    }
    *(_QWORD *)(v3 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
