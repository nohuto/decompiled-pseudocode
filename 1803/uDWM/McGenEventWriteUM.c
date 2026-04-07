/*
 * XREFs of McGenEventWriteUM @ 0x180073C1C
 * Callers:
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 *     McTemplateU0qp @ 0x180074538 (McTemplateU0qp.c)
 *     McTemplateU0pp @ 0x18007FE90 (McTemplateU0pp.c)
 *     McTemplateU0z @ 0x18007FEFC (McTemplateU0z.c)
 *     McTemplateU0p @ 0x18008273C (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x180082820 (McTemplateU0pq.c)
 *     McTemplateU0pddddd @ 0x180086894 (McTemplateU0pddddd.c)
 *     McTemplateU0ppd @ 0x18008694C (McTemplateU0ppd.c)
 *     McTemplateU0dddd @ 0x180087CEC (McTemplateU0dddd.c)
 *     McTemplateU0ddddddddddffffqqq @ 0x1800959A0 (McTemplateU0ddddddddddffffqqq.c)
 *     McTemplateU0ddqqqqqqp @ 0x180095B40 (McTemplateU0ddqqqqqqp.c)
 *     McTemplateU0qdq @ 0x1800967B8 (McTemplateU0qdq.c)
 *     McTemplateU0qffff @ 0x180096824 (McTemplateU0qffff.c)
 *     McTemplateU0pddddddd @ 0x180098404 (McTemplateU0pddddddd.c)
 *     McTemplateU0pddddq @ 0x1800984DC (McTemplateU0pddddq.c)
 *     McTemplateU0qq @ 0x18009AB70 (McTemplateU0qq.c)
 *     McTemplateU0pqq @ 0x18009AD40 (McTemplateU0pqq.c)
 *     McTemplateU0qd @ 0x1800A29F4 (McTemplateU0qd.c)
 *     McTemplateU0tttt @ 0x1800A2A68 (McTemplateU0tttt.c)
 *     McTemplateU0pdd @ 0x1800A32A8 (McTemplateU0pdd.c)
 *     McTemplateU0qqqp @ 0x1800A773C (McTemplateU0qqqp.c)
 *     McTemplateU0j @ 0x1800A823C (McTemplateU0j.c)
 *     McTemplateU0jdd @ 0x1800A828C (McTemplateU0jdd.c)
 *     McTemplateU0ji @ 0x1800A82FC (McTemplateU0ji.c)
 *     McTemplateU0jqi @ 0x1800A8364 (McTemplateU0jqi.c)
 *     McTemplateU0jq @ 0x1800A860C (McTemplateU0jq.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWriteUM(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // r11
  char v5; // bl
  __int64 v6; // r10
  __int128 v7; // xmm0
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16 *)a1[1];
  v5 = 0;
  v6 = a4;
  if ( v4 )
  {
    *(_QWORD *)a4 = v4;
    *(_DWORD *)(a4 + 8) = *v4;
    *(_DWORD *)(a4 + 12) = 2;
  }
  else
  {
    a3 = (unsigned int)(a3 - 1);
    v5 = 12;
    v6 = (a4 + 16) & -(__int64)((_DWORD)a3 != 0);
  }
  if ( *((_BYTE *)a2 + 3) == v5 )
  {
    v7 = *a2;
    a2 = &v9;
    v9 = v7;
    BYTE3(v9) = v4 != 0LL ? 0xC : 0;
  }
  return EtwEventWrite(*a1, a2, a3, v6, v9, *((_QWORD *)&v9 + 1));
}
