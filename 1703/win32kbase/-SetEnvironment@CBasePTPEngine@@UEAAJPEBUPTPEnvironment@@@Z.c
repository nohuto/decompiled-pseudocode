/*
 * XREFs of ?SetEnvironment@CBasePTPEngine@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01380A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBasePTPEngine::SetEnvironment(CBasePTPEngine *this, const struct PTPEnvironment *a2)
{
  __int64 v2; // r8
  _OWORD *v3; // rax
  __int128 v4; // xmm1

  v2 = 4LL;
  v3 = (_OWORD *)((char *)this + 16);
  do
  {
    *v3 = *(_OWORD *)a2;
    v3[1] = *((_OWORD *)a2 + 1);
    v3[2] = *((_OWORD *)a2 + 2);
    v3[3] = *((_OWORD *)a2 + 3);
    v3[4] = *((_OWORD *)a2 + 4);
    v3[5] = *((_OWORD *)a2 + 5);
    v3[6] = *((_OWORD *)a2 + 6);
    v3 += 8;
    v4 = *((_OWORD *)a2 + 7);
    a2 = (const struct PTPEnvironment *)((char *)a2 + 128);
    *(v3 - 1) = v4;
    --v2;
  }
  while ( v2 );
  return (*(__int64 (__fastcall **)(CBasePTPEngine *, const struct PTPEnvironment *, _QWORD, __int64))(*(_QWORD *)this + 40LL))(
           this,
           a2,
           0LL,
           128LL);
}
