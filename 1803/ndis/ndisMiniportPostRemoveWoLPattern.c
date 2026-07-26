/*
 * XREFs of ndisMiniportPostRemoveWoLPattern @ 0x1C004A9B4
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004AB10 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C004B2C0 (ndisPostSetRemoveWakeUpPattern.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     ndisGetPatternEffectivePriority @ 0x1C0049F90 (ndisGetPatternEffectivePriority.c)
 */

void __fastcall ndisMiniportPostRemoveWoLPattern(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 OidSourceHandle; // rdi
  int v4; // r10d
  __int64 v5; // r9
  _QWORD *v6; // rdx
  __int64 *v7; // rcx
  int v8; // eax
  _QWORD *v9; // r9
  _QWORD *v10; // r8
  _QWORD *v11; // r11
  bool v12; // zf
  _QWORD *v13; // r8
  _QWORD *v14; // r10
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // r11
  _QWORD *v19; // rsi
  void *v20; // r10
  int PatternEffectivePriority; // eax
  __int64 v22; // r8

  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v4 = **(_DWORD **)(v2 + 40);
  v6 = (_QWORD *)(v5 + 968);
  v7 = *(__int64 **)(v5 + 968);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)v7 + 49);
      v9 = v7;
      v10 = v6;
      v11 = v7;
      v12 = v8 == v4;
      if ( v8 == v4 )
        break;
      v6 = v7;
      v7 = (__int64 *)*v7;
      if ( !v7 )
      {
        v12 = v8 == v4;
        break;
      }
    }
    if ( v12 )
      v9 = v10;
    v13 = 0LL;
    if ( v8 == v4 )
      v13 = v11;
    if ( v13 )
    {
      v14 = 0LL;
      v15 = v13 + 1;
      if ( v13 != (_QWORD *)-8LL )
      {
        do
        {
          v16 = v15 - 1;
          v17 = v15;
          v18 = v15[2];
          v19 = v14;
          if ( v18 == OidSourceHandle )
            break;
          v14 = v15;
          v15 = (_QWORD *)*v15;
        }
        while ( v15 );
        v20 = 0LL;
        if ( v18 == OidSourceHandle )
        {
          v20 = v16;
          v17 = v19;
        }
        if ( v20 )
        {
          if ( v17 )
          {
            *v17 = *v15;
          }
          else
          {
            if ( !*v15 )
            {
              *v9 = *v7;
              goto LABEL_22;
            }
            v13 = (_QWORD *)(*v15 - 8LL);
            *v9 = v13;
            *v13 = *v7;
          }
          PatternEffectivePriority = ndisGetPatternEffectivePriority((__int64)v13);
          *(_DWORD *)(v22 + 36) = PatternEffectivePriority;
LABEL_22:
          ExFreePoolWithTag(v20, 0);
        }
      }
    }
  }
}
