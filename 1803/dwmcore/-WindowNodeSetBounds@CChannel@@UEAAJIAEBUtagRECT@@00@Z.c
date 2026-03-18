/*
 * XREFs of ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x180085D20
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::WindowNodeSetBounds(
        CChannel *this,
        int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+24h] [rbp-44h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  __int128 v17; // [rsp+38h] [rbp-30h]
  __int128 v18; // [rsp+48h] [rbp-20h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v14 = 420;
  memset_0(&v15, 0, 0x34uLL);
  v10 = (__int128)*a4;
  v16 = (__int128)*a3;
  v15 = a2;
  v11 = (__int128)*a5;
  v17 = v10;
  v18 = v11;
  v12 = CChannel::SendCommand(this, &v14, 0x38u);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v12;
}
