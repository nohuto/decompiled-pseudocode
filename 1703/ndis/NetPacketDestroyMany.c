/*
 * XREFs of NetPacketDestroyMany @ 0x1C00F2A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ??$OffsetPointerBy@U_NET_PACKET@@@@YAPEAU_NET_PACKET@@PEAU0@K@Z @ 0x1C00783FC (--$OffsetPointerBy@U_NET_PACKET@@@@YAPEAU_NET_PACKET@@PEAU0@K@Z.c)
 */

signed __int64 __fastcall NetPacketDestroyMany(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  _QWORD *i; // rbx
  unsigned int v9; // ebp
  unsigned __int64 v10; // r14
  __int64 v11; // rax

  v5 = a4;
  if ( (dword_1C00926F8 & 2) != 0 )
  {
    for ( i = P; i; i = (_QWORD *)i[3] )
    {
      if ( i[6] && (_DWORD)v5 )
      {
        v9 = 0;
        v10 = v5;
        do
        {
          v11 = OffsetPointerBy<_NET_PACKET>(a2, v9);
          ((void (__fastcall *)(_QWORD, __int64))i[6])(i[4], v11 + *((unsigned int *)i + 4));
          v9 += a3;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), v5);
}
