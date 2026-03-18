/*
 * XREFs of ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x180064DA0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z @ 0x180061CBC (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180154700 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::GetGeometryCount(Mesh *this, char a2, char a3, int *a4, int *a5)
{
  char v5; // al
  int v10; // edi
  int v11; // ebp
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int *v15; // rdx
  int v16; // ecx
  unsigned int v17; // r8d
  __int64 v18; // rax
  int inited; // eax
  __int64 v20; // r10
  __int64 v21; // rdx
  int v22; // ecx
  _QWORD *i; // rcx
  __int64 v24; // r8
  int v25; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+34h] [rbp-54h]
  int v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+3Ch] [rbp-4Ch]

  v5 = *((_BYTE *)this + 236);
  if ( (v5 & 1) != 0 )
  {
    v10 = *((_DWORD *)this + 42);
    v11 = 0;
    v12 = *((_QWORD *)this + 23);
    if ( !v12 || (v5 & 0x18) != 0 )
    {
      inited = Mesh::InitMeshGraph(this);
      v13 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0xF34u);
        return v13;
      }
      if ( a2 )
        v11 = 3
            * (*(_DWORD *)(*((_QWORD *)this + 22) + 100LL)
             + 2 * (*(_DWORD *)(*((_QWORD *)this + 22) + 92LL) - *(_DWORD *)(*((_QWORD *)this + 22) + 104LL)));
      if ( a3 )
      {
        if ( (*((_BYTE *)this + 236) & 0x40) != 0 )
        {
          v20 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
          v21 = v20;
          if ( v20 )
          {
            do
            {
              if ( (*(_BYTE *)(v21 + 28) & 0xC) == 0xC )
              {
                v22 = *(_DWORD *)(v21 + 64);
                v11 = v11 + 6 * v22 - 6;
                v10 += v22 - 1;
                for ( i = *(_QWORD **)(v21 + 48); i; i = (_QWORD *)i[8] )
                {
                  if ( i[3] != i[4] )
                  {
                    if ( (v24 = *(_QWORD *)(v21 + 80), *i != **(_QWORD **)(v24 + 48)) && *i != **(_QWORD **)(v24 + 56)
                      || (*(_BYTE *)(v24 + 28) & 0xC) != 0xC )
                    {
                      ++v10;
                    }
                  }
                }
              }
              else if ( (*(_BYTE *)(*(_QWORD *)(v21 + 72) + 28LL) & 0xC) == 0xC )
              {
                ++v10;
              }
              v21 = *(_QWORD *)(v21 + 80);
            }
            while ( v21 != v20 && v21 );
          }
        }
      }
    }
    else
    {
      if ( a2 )
        v11 = *(_DWORD *)(v12 + 128);
      if ( a3 && (v5 & 0x40) != 0 )
      {
        v15 = &v25;
        v16 = *((_DWORD *)this + 52);
        v26 = *((_DWORD *)this + 53);
        v17 = 0;
        v28 = v26;
        v25 = v16;
        v27 = v16;
        do
        {
          if ( *(int *)((char *)v15 + this - (Mesh *)&v25 + 220) == 12 )
          {
            v11 = v11 + 6 * *v15 - 6;
            v10 = *v15 + v10 - 1;
          }
          else
          {
            v18 = 232LL;
            if ( v17 )
              v18 = (__int64)v15 + 216LL - (_QWORD)&v25;
            if ( *(_DWORD *)((char *)this + v18) == 12 )
              ++v10;
          }
          ++v17;
          ++v15;
        }
        while ( v17 < 4 );
      }
    }
    *a4 = v10;
    v13 = 0;
    *a5 = v11;
  }
  else
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0xF0Bu);
  }
  return v13;
}
