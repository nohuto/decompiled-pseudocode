/*
 * XREFs of McGenEventWriteUM @ 0x18006CE6C
 * Callers:
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 *     McTemplateU0qp @ 0x18006D798 (McTemplateU0qp.c)
 *     McTemplateU0z @ 0x180075554 (McTemplateU0z.c)
 *     McTemplateU0p @ 0x180079554 (McTemplateU0p.c)
 *     McTemplateU0pq @ 0x180079638 (McTemplateU0pq.c)
 *     McTemplateU0pddddd @ 0x18007D22C (McTemplateU0pddddd.c)
 *     McTemplateU0dddd @ 0x18007EBEC (McTemplateU0dddd.c)
 *     McTemplateU0ddddddddddffffqqq @ 0x18008C924 (McTemplateU0ddddddddddffffqqq.c)
 *     McTemplateU0ddqqqqqqp @ 0x18008CAC4 (McTemplateU0ddqqqqqqp.c)
 *     McTemplateU0qdq @ 0x18008D738 (McTemplateU0qdq.c)
 *     McTemplateU0qffff @ 0x18008D7A4 (McTemplateU0qffff.c)
 *     McTemplateU0pddddddd @ 0x18008FBD8 (McTemplateU0pddddddd.c)
 *     McTemplateU0pddddq @ 0x18008FCA8 (McTemplateU0pddddq.c)
 *     McTemplateU0pp @ 0x18008FD60 (McTemplateU0pp.c)
 *     McTemplateU0qq @ 0x180092460 (McTemplateU0qq.c)
 *     McTemplateU0pqq @ 0x1800925B8 (McTemplateU0pqq.c)
 *     McTemplateU0qd @ 0x18009A58C (McTemplateU0qd.c)
 *     McTemplateU0tttt @ 0x18009A600 (McTemplateU0tttt.c)
 *     McTemplateU0pdd @ 0x18009AEA0 (McTemplateU0pdd.c)
 *     McTemplateU0qqqp @ 0x18009F1F4 (McTemplateU0qqqp.c)
 *     McTemplateU0j @ 0x18009F580 (McTemplateU0j.c)
 *     McTemplateU0jdd @ 0x18009F5D0 (McTemplateU0jdd.c)
 *     McTemplateU0ji @ 0x18009F640 (McTemplateU0ji.c)
 *     McTemplateU0jqi @ 0x18009F6A8 (McTemplateU0jqi.c)
 *     McTemplateU0jq @ 0x18009F8A8 (McTemplateU0jq.c)
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
