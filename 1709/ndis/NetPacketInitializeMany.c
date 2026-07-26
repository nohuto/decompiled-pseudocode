/*
 * XREFs of NetPacketInitializeMany @ 0x1C00FC280
 * Callers:
 *     NetPacketInitializeOne @ 0x1C00FC410 (NetPacketInitializeOne.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ??$IsBufferAligned@U_NET_PACKET@@@@YA_NPEAX@Z @ 0x1C007C5B4 (--$IsBufferAligned@U_NET_PACKET@@@@YA_NPEAX@Z.c)
 *     ??$OffsetPointerBy@U_NET_PACKET@@@@YAPEAU_NET_PACKET@@PEAU0@K@Z @ 0x1C007C5C4 (--$OffsetPointerBy@U_NET_PACKET@@@@YAPEAU_NET_PACKET@@PEAU0@K@Z.c)
 */

char __fastcall NetPacketInitializeMany(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int64 v9; // rax
  int v10; // r12d
  unsigned int v11; // r9d
  __int64 v12; // rax
  int v13; // r10d
  int v14; // r9d
  __int64 v15; // r11
  _QWORD *v16; // rcx
  unsigned __int64 v17; // r14
  unsigned __int64 *v18; // r8
  unsigned int i; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *j; // rbx
  unsigned int v23; // r14d
  __int64 v24; // r12
  __int64 v25; // rax

  LOBYTE(v9) = IsBufferAligned<_NET_PACKET>((char)a2);
  if ( (_BYTE)v9 )
  {
    v9 = a6 * (unsigned __int64)a4;
    if ( v9 <= 0xFFFFFFFF )
    {
      LOBYTE(v9) = (unsigned __int8)memset(a2, 0, (unsigned int)v9);
      if ( a5 > 1 && a6 )
      {
        v10 = dword_1C0098814;
        v11 = 0;
        do
        {
          v12 = OffsetPointerBy<_NET_PACKET>((__int64)a2, v11);
          v9 = OffsetPointerBy<_NET_PACKET>(v12, v13 & (unsigned int)(v10 + Size - 1));
          v17 = v9;
          *v18 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)*v16) & 0x1F;
          if ( a5 > 2 )
          {
            for ( i = 2; i < a5; ++i )
            {
              v20 = 32LL * (i - 2);
              v21 = 32LL * (i - 1);
              v9 = (*(_DWORD *)(v20 + v17) ^ (unsigned int)v17) & 0x1F;
              *(_QWORD *)(v20 + v17) = v9 ^ (v17 + v21);
            }
          }
          v11 = a4 + v14;
        }
        while ( v15 != 1 );
      }
      if ( (dword_1C0098810 & 1) != 0 )
      {
        for ( j = P; j; j = (_QWORD *)j[3] )
        {
          if ( j[5] && a6 )
          {
            v23 = 0;
            v24 = a6;
            do
            {
              v25 = OffsetPointerBy<_NET_PACKET>((__int64)a2, v23);
              LOBYTE(v9) = ((__int64 (__fastcall *)(_QWORD, __int64))j[5])(j[4], v25 + *((unsigned int *)j + 4));
              v23 += a4;
              --v24;
            }
            while ( v24 );
          }
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), a6);
    }
  }
  return v9;
}
