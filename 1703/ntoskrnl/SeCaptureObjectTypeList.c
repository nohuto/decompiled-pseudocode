/*
 * XREFs of SeCaptureObjectTypeList @ 0x140093620
 * Callers:
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectTypeList(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  int v7; // edi
  char *PoolWithTag; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int16 v13; // r8
  char *v14; // r10
  _OWORD *v15; // rcx
  int v17; // [rsp+24h] [rbp-64h]
  char *v18; // [rsp+28h] [rbp-60h]
  _DWORD v20[6]; // [rsp+38h] [rbp-50h]

  v7 = 0;
  PoolWithTag = 0LL;
  *a4 = 0LL;
  if ( a3 != 1 )
    return 3221225474LL;
  if ( a2 )
  {
    if ( a1 )
    {
      v9 = 16LL * a2;
      if ( v9 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + a1 > 0x7FFFFFFF0000LL || v9 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48LL * a2, 0x744F6553u);
      v18 = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = 0LL;
        v17 = 0;
        while ( (unsigned int)v10 < a2 )
        {
          v11 = (unsigned int)v10;
          v12 = 2 * v10;
          v13 = *(_WORD *)(a1 + 8 * v12);
          if ( v13 > 4u )
            goto LABEL_25;
          v14 = &PoolWithTag[48 * v11];
          *(_WORD *)v14 = v13;
          *((_WORD *)v14 + 1) = 0;
          v15 = *(_OWORD **)(a1 + 8 * v12 + 8);
          if ( ((unsigned __int8)v15 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)(v14 + 4) = *v15;
          *((_QWORD *)v14 + 3) = 0LL;
          *((_DWORD *)v14 + 8) = 0;
          *((_QWORD *)v14 + 5) = 0LL;
          if ( v17 )
          {
            PoolWithTag = v18;
            if ( v13 > (unsigned int)*(unsigned __int16 *)&v18[48 * (v17 - 1)] + 1 || !v13 )
              goto LABEL_25;
            *((_DWORD *)v14 + 5) = v20[v13 - 1];
          }
          else
          {
            if ( v13 )
            {
              v7 = -1073741811;
              PoolWithTag = v18;
              break;
            }
            *((_DWORD *)v14 + 5) = -1;
            PoolWithTag = v18;
          }
          v20[v13] = v17;
          v10 = (unsigned int)++v17;
          v7 = 0;
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
LABEL_25:
      v7 = -1073741811;
    }
  }
  if ( v7 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a4 = PoolWithTag;
  }
  return (unsigned int)v7;
}
