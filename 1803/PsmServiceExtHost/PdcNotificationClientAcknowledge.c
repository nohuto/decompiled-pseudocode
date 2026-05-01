/*
 * XREFs of PdcNotificationClientAcknowledge @ 0x18006B63C
 * Callers:
 *     ?HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z @ 0x18006074C (-HampSystemNotificationClientAcknowledge@@YAXPEAXJ@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     PdcPortSendMessage @ 0x18006BACC (PdcPortSendMessage.c)
 */

__int64 __fastcall PdcNotificationClientAcknowledge(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  int v6; // esi
  int v7; // eax
  _BYTE v9[40]; // [rsp+20h] [rbp-328h] BYREF
  int v10; // [rsp+48h] [rbp-300h]
  int v11; // [rsp+50h] [rbp-2F8h]
  int v12; // [rsp+58h] [rbp-2F0h]

  if ( a1 && *(_DWORD *)a1 == 1315136592 )
  {
    v5 = a1 + 8;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v6 = 0;
    *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
    if ( a2 != 259 )
      v6 = a2;
    if ( *(_DWORD *)(a1 + 88) != 1 || *(_BYTE *)(a1 + 96) )
    {
      v4 = -1073741811;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 100) != GetCurrentThreadId() )
      {
        memset_0(v9, 0, 0x318uLL);
        v7 = *(_DWORD *)(a1 + 84);
        --*(_DWORD *)(a1 + 88);
        *(_DWORD *)(v5 + 8) = 0;
        v12 = v7;
        v10 = 2;
        v11 = v6;
        ReleaseSRWLockExclusive((PSRWLOCK)v5);
        return (unsigned int)PdcPortSendMessage(*(_QWORD *)(a1 + 32), v9);
      }
      *(_DWORD *)(a1 + 104) = v6;
      *(_BYTE *)(a1 + 96) = 1;
      v4 = 0;
    }
    *(_DWORD *)(v5 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)v5);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v4;
}
