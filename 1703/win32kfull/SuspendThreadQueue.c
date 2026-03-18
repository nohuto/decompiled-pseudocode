/*
 * XREFs of SuspendThreadQueue @ 0x1C00FAC40
 * Callers:
 *     <none>
 * Callees:
 *     UnlinkSendListSms @ 0x1C0049380 (UnlinkSendListSms.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxReceiverDied @ 0x1C00C675C (xxxReceiverDied.c)
 *     CleanInputMessage @ 0x1C00CB8DC (CleanInputMessage.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D8BF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall SuspendThreadQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  _QWORD *v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 *v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = a1;
  v3 = a1;
  if ( (*(_DWORD *)(a1 + 440) & 0x1000001) == 0x1000000 )
  {
    v4 = *(__int64 **)(a1 + 384);
    v5 = *v4;
    if ( *v4 )
    {
      do
      {
        v6 = *(_QWORD *)v5;
        if ( *(_DWORD *)(v5 + 96) == 9 && v5 != v4[6] && v5 != v4[5] && (*(_DWORD *)(v5 + 100) & 0x100) == 0 )
        {
          v7 = *(unsigned int *)(v5 + 24);
          if ( !((unsigned int)v7 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v7] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v5);
            DelQEntry((__int64)v4, v5, 1);
          }
        }
        v5 = v6;
      }
      while ( v6 );
      v3 = v23;
    }
    v9 = *(_QWORD *)(v3 + 728);
    if ( v9 )
    {
      do
      {
        v10 = *(_QWORD *)v9;
        if ( v9 != v4[6] && v9 != v4[5] && (*(_DWORD *)(v9 + 100) & 0x100) == 0 )
        {
          a3 = *(unsigned int *)(v9 + 24);
          if ( !((unsigned int)a3 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[a3] >> 10) & 7) )
          {
            CleanInputMessage(a3, v9);
            DelQEntry(v3 + 728, v9, 1);
          }
        }
        v9 = v10;
      }
      while ( v10 );
      v3 = v23;
    }
    v12 = (_QWORD *)(v3 + 472);
    v13 = *(_QWORD **)(v3 + 472);
    if ( v13 != (_QWORD *)(v3 + 472) )
    {
      do
      {
        v14 = (__int64)(v13 - 2);
        v13 = (_QWORD *)*v13;
        if ( !*(_QWORD *)(v14 + 64) )
        {
          v15 = *(_DWORD *)(v14 + 84);
          if ( (v15 & 0x4000) == 0 )
          {
            v16 = *(_QWORD *)(v14 + 32);
            if ( v16 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v3 + 376), **(_QWORD **)(v16 + 376)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
                xxxReceiverDied(v14, v17, v18);
                if ( !(_BYTE)v23 )
                {
                  --gdwInAtomicOperation;
                  UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v23);
                }
              }
            }
            else if ( (v15 & 8) != 0 )
            {
              v19 = *(unsigned int *)(v14 + 104);
              if ( !((unsigned int)v19 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v19] >> 10) & 7) )
              {
                v21 = (__int64 *)(v14 + 16);
                if ( *(_QWORD *)(v14 + 16) )
                {
                  --*(_DWORD *)(v3 + 488);
                  v16 = *v21;
                  v22 = *(__int64 **)(v14 + 24);
                  if ( *(__int64 **)(*v21 + 8) != v21 || (__int64 *)*v22 != v21 )
                    __fastfail(3u);
                  *v22 = v16;
                  *(_QWORD *)(v16 + 8) = v22;
                  *v21 = 0LL;
                }
                if ( (_QWORD *)*v12 == v12 )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 400LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 400LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms((__int64 *)v14, v16, a3);
              }
            }
          }
        }
      }
      while ( v13 != v12 );
    }
    *(_DWORD *)(v3 + 1096) |= 0x20u;
  }
}
