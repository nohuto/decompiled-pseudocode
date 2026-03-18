/*
 * XREFs of ??1SC_DEVICE@@UEAA@XZ @ 0x14015D5EC
 * Callers:
 *     ??1SC_DISK@@UEAA@XZ @ 0x14015D23C (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x1402C9E20 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 */

void __fastcall SC_DEVICE::~SC_DEVICE(SC_DEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    PspQueueApcSpecialApc(v2);
  v3 = *((_QWORD *)this + 14);
  if ( v3 )
    PspQueueApcSpecialApc(v3);
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    PspQueueApcSpecialApc(v4);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    PspQueueApcSpecialApc(v5);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
    PspQueueApcSpecialApc(v6);
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
    PspQueueApcSpecialApc(v7);
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
    PspQueueApcSpecialApc(v8);
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
    PspQueueApcSpecialApc(v9);
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
    PspQueueApcSpecialApc(v10);
}
