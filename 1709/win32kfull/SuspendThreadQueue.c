/*
 * XREFs of SuspendThreadQueue @ 0x1C0105060
 * Callers:
 *     <none>
 * Callees:
 *     xxxReceiverDied @ 0x1C004911C (xxxReceiverDied.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     UnlinkSendListSms @ 0x1C00A17B0 (UnlinkSendListSms.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     CleanInputMessage @ 0x1C0111FEC (CleanInputMessage.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r8
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = a1;
  v3 = a1;
  if ( (*(_DWORD *)(a1 + 464) & 0x1000001) == 0x1000000 )
  {
    v4 = *(_QWORD **)(a1 + 408);
    v5 = v4[3];
    if ( v5 )
    {
      do
      {
        v6 = *(_QWORD *)v5;
        if ( *(_DWORD *)(v5 + 96) == 9 && v5 != v4[10] && v5 != v4[9] && (*(_DWORD *)(v5 + 100) & 0x100) == 0 )
        {
          v7 = *(unsigned int *)(v5 + 24);
          if ( !((unsigned int)v7 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v7] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v5, a2, a3);
            DelQEntry(v4 + 3, v5);
          }
        }
        v5 = v6;
      }
      while ( v6 );
      v3 = v26;
    }
    v9 = *(_QWORD *)(v3 + 784);
    if ( v9 )
    {
      do
      {
        v10 = *(_QWORD *)v9;
        if ( v9 != v4[10] && v9 != v4[9] && (*(_DWORD *)(v9 + 100) & 0x100) == 0 )
        {
          v11 = *(unsigned int *)(v9 + 24);
          if ( !((unsigned int)v11 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v11] >> 10) & 7) )
          {
            CleanInputMessage((unsigned int)v11, v9);
            DelQEntry((_QWORD *)(v3 + 784), v9);
          }
        }
        v9 = v10;
      }
      while ( v10 );
      v3 = v26;
    }
    v13 = (_QWORD *)(v3 + 496);
    v14 = *(_QWORD **)(v3 + 496);
    if ( v14 != (_QWORD *)(v3 + 496) )
    {
      do
      {
        v15 = (__int64)(v14 - 2);
        v14 = (_QWORD *)*v14;
        if ( !*(_QWORD *)(v15 + 64) )
        {
          v16 = *(_DWORD *)(v15 + 84);
          if ( (v16 & 0x4000) == 0 )
          {
            v17 = *(_QWORD *)(v15 + 32);
            if ( v17 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v3 + 400), **(_QWORD **)(v17 + 400)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v26);
                xxxReceiverDied(v15, v18, v19, v20);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v26);
              }
            }
            else if ( (v16 & 8) != 0 )
            {
              v21 = *(unsigned int *)(v15 + 104);
              if ( !((unsigned int)v21 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v21] >> 10) & 7) )
              {
                v23 = v15 + 16;
                if ( *(_QWORD *)(v15 + 16) )
                {
                  --*(_DWORD *)(v3 + 512);
                  v24 = *(_QWORD *)v23;
                  if ( *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23 || (v25 = *(_QWORD **)(v15 + 24), *v25 != v23) )
                    __fastfail(3u);
                  *v25 = v24;
                  *(_QWORD *)(v24 + 8) = v25;
                  *(_QWORD *)v23 = 0LL;
                }
                if ( (_QWORD *)*v13 == v13 )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 424LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 424LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms((__int64 *)v15);
              }
            }
          }
        }
      }
      while ( v14 != v13 );
    }
    *(_DWORD *)(v3 + 1184) |= 0x20u;
  }
}
