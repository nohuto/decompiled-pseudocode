/*
 * XREFs of xxxDoSysExpunge @ 0x1C00F48CC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005AF70 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     ClientFreeLibrary @ 0x1C00F4A00 (ClientFreeLibrary.c)
 *     __report_rangecheckfailure @ 0x1C0195CE0 (__report_rangecheckfailure.c)
 */

__int64 __fastcall xxxDoSysExpunge(__int64 a1)
{
  __int64 result; // rax
  int v3; // esi
  int v4; // edx
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  int v11; // ebp

  result = gcSysExpunge;
  v3 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 376) + 368LL) = gcSysExpunge;
  v4 = catomSysTableEntries;
  if ( catomSysTableEntries > 0 )
  {
    v5 = 0LL;
    v6 = 376LL;
    v7 = 0LL;
    do
    {
      if ( !*(_DWORD *)((char *)&acatomSysDepends + v7) )
      {
        v8 = *(unsigned __int16 *)((char *)&aatomSysLoaded + v5);
        if ( (_WORD)v8 )
        {
          v9 = *(_QWORD *)(a1 + 376);
          if ( ((1 << v3) & *(_DWORD *)(v9 + 372)) != 0 )
          {
            v10 = *(_QWORD *)(v6 + v9);
            v11 = ~(1 << v3);
            *(_QWORD *)(v6 + v9) = 0LL;
            *(_DWORD *)(*(_QWORD *)(a1 + 376) + 372LL) &= v11;
            if ( (*(_DWORD *)((char *)&acatomSysUse + v7))-- == 1 )
            {
              UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, (unsigned __int16)v8, v8);
              if ( v5 >= 0x40 )
                _report_rangecheckfailure();
              gdwSysExpungeMask &= v11;
              *(_WORD *)((char *)&aatomSysLoaded + v5) = 0;
            }
            result = ClientFreeLibrary(v10);
            v4 = catomSysTableEntries;
          }
        }
      }
      ++v3;
      v6 += 8LL;
      v7 += 4LL;
      v5 += 2LL;
    }
    while ( v3 < v4 );
  }
  return result;
}
