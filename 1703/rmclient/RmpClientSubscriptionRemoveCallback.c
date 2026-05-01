/*
 * XREFs of RmpClientSubscriptionRemoveCallback @ 0x18000BF40
 * Callers:
 *     RmpClientRegisterActivityHostCallbacks @ 0x180005600 (RmpClientRegisterActivityHostCallbacks.c)
 *     RmpClientAcquireResourceSet @ 0x180005A30 (RmpClientAcquireResourceSet.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x180007E28 (RmpClientSubscriptionDeliverPayload.c)
 *     RmpClientSubscriptionCleanup @ 0x18000BDD0 (RmpClientSubscriptionCleanup.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RmpClientSubscriptionRemoveCallback(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h]

  v7 = a2[1] & (-1LL << (*(_DWORD *)(a1 + 28) & 0x1F));
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 32)
                + 8LL
                * ((37
                  * (BYTE6(v7)
                   + 37
                   * (BYTE5(v7)
                    + 37
                    * (BYTE4(v7)
                     + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                  + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(a1 + 28) >> 5) - 1)));
  if ( (*a2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 32)
                  + 8LL
                  * ((37
                    * (BYTE6(v7)
                     + 37
                     * (BYTE5(v7)
                      + 37
                      * (BYTE4(v7)
                       + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                    + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(a1 + 28) >> 5) - 1)));
  while ( (*v3 & 1) == 0 )
  {
    if ( (_QWORD *)*v3 == a2 )
    {
      *v3 = *a2;
      --*(_DWORD *)(a1 + 24);
      *a2 |= 0x8000000000000002uLL;
      break;
    }
    v3 = (_QWORD *)*v3;
  }
  result = a2 + 2;
  if ( a2[2] )
  {
    v5 = *result;
    v6 = (_QWORD *)a2[3];
    if ( *(_QWORD **)(*result + 8LL) != result || (_QWORD *)*v6 != result )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  return result;
}
