/*
 * XREFs of NetPacketInitializeMany @ 0x1C00F2D90
 * Callers:
 *     NetPacketInitializeOne @ 0x1C00F2F20 (NetPacketInitializeOne.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ??$IsBufferAligned@U_NET_PACKET@@@@YA_NPEAX@Z @ 0x1C00783EC (--$IsBufferAligned@U_NET_PACKET@@@@YA_NPEAX@Z.c)
 *     ??$OffsetPointerBy@U_NET_PACKET@@@@YAPEAU_NET_PACKET@@PEAU0@K@Z @ 0x1C00783FC (--$OffsetPointerBy@U_NET_PACKET@@@@YAPEAU_NET_PACKET@@PEAU0@K@Z.c)
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
  int v10; // ecx
  int v11; // r13d
  unsigned int v12; // r9d
  __int64 v13; // rax
  int v14; // r10d
  int v15; // r9d
  __int64 v16; // r11
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rbp
  unsigned __int64 *v19; // r8
  unsigned int i; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *j; // rbx
  unsigned int v24; // ebp
  __int64 v25; // r13
  __int64 v26; // rax

  LOBYTE(v9) = IsBufferAligned<_NET_PACKET>((char)a2);
  if ( (_BYTE)v9 )
  {
    v9 = a6 * (unsigned __int64)a4;
    if ( v9 > 0xFFFFFFFF )
    {
      LODWORD(v9) = -1;
      v10 = -1073741675;
    }
    else
    {
      v10 = 0;
    }
    if ( v10 >= 0 )
    {
      LOBYTE(v9) = (unsigned __int8)memset(a2, 0, (unsigned int)v9);
      if ( a5 > 1 && a6 )
      {
        v11 = dword_1C00926FC;
        v12 = 0;
        do
        {
          v13 = OffsetPointerBy<_NET_PACKET>((__int64)a2, v12);
          v9 = OffsetPointerBy<_NET_PACKET>(v13, v14 & (unsigned int)(v11 + Size - 1));
          v18 = v9;
          *v19 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)*v17) & 0x1F;
          if ( a5 > 2 )
          {
            for ( i = 2; i < a5; ++i )
            {
              v21 = 32LL * (i - 2);
              v22 = 32LL * (i - 1);
              v9 = ((unsigned __int8)v18 ^ (unsigned __int8)*(_QWORD *)(v21 + v18)) & 0x1F;
              *(_QWORD *)(v21 + v18) = v9 ^ (v18 + v22);
            }
          }
          v12 = a4 + v15;
        }
        while ( v16 != 1 );
      }
      if ( (dword_1C00926F8 & 1) != 0 )
      {
        for ( j = P; j; j = (_QWORD *)j[3] )
        {
          if ( j[5] && a6 )
          {
            v24 = 0;
            v25 = a6;
            do
            {
              v26 = OffsetPointerBy<_NET_PACKET>((__int64)a2, v24);
              LOBYTE(v9) = ((__int64 (__fastcall *)(_QWORD, __int64))j[5])(j[4], v26 + *((unsigned int *)j + 4));
              v24 += a4;
              --v25;
            }
            while ( v25 );
          }
        }
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), a6);
    }
  }
  return v9;
}
