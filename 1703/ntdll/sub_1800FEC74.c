/*
 * XREFs of sub_1800FEC74 @ 0x1800FEC74
 * Callers:
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     RtlRunOnceBeginInitialize @ 0x180028CF0 (RtlRunOnceBeginInitialize.c)
 */

__int64 __fastcall sub_1800FEC74(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rax
  volatile signed __int64 *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 368LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v4 = 136LL;
  v5 = (volatile signed __int64 *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(
               v5,
               (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))sub_1800FE1C0,
               0LL,
               &v7);
  else
    result = RtlRunOnceBeginInitialize(v5, 1, (unsigned __int64 *)&v7);
  if ( (int)result >= 0 )
  {
    *a3 = v7;
    return 0LL;
  }
  return result;
}
