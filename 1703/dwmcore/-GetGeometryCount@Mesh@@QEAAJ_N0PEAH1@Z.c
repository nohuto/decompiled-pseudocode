/*
 * XREFs of ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x18003D118
 * Callers:
 *     ?AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z @ 0x18004009C (-AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x18015E560 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::GetGeometryCount(Mesh *this, char a2, char a3, int *a4, int *a5)
{
  char v6; // cl
  __int64 v10; // rax
  int v11; // ebp
  int v12; // edi
  unsigned int v13; // ebx
  int *v15; // rdx
  int v16; // ecx
  unsigned int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rax
  int inited; // eax
  __int64 v21; // r10
  __int64 v22; // rdx
  int v23; // ecx
  _QWORD *i; // rcx
  __int64 v25; // r8
  int v26; // [rsp+30h] [rbp-58h] BYREF
  int v27; // [rsp+34h] [rbp-54h]
  int v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+3Ch] [rbp-4Ch]

  v6 = *((_BYTE *)this + 236);
  if ( (v6 & 1) != 0 )
  {
    v10 = *((_QWORD *)this + 23);
    v11 = 0;
    v12 = *((_DWORD *)this + 42);
    if ( !v10 || (v6 & 0x18) != 0 )
    {
      inited = Mesh::InitMeshGraph(this);
      v13 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0xF34u);
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
          v21 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
          v22 = v21;
          if ( v21 )
          {
            do
            {
              if ( (*(_BYTE *)(v22 + 28) & 0xC) == 0xC )
              {
                v23 = *(_DWORD *)(v22 + 64);
                v11 = v11 + 6 * v23 - 6;
                v12 += v23 - 1;
                for ( i = *(_QWORD **)(v22 + 48); i; i = (_QWORD *)i[8] )
                {
                  if ( i[3] != i[4] )
                  {
                    if ( (v25 = *(_QWORD *)(v22 + 80), *i != **(_QWORD **)(v25 + 48)) && *i != **(_QWORD **)(v25 + 56)
                      || (*(_BYTE *)(v25 + 28) & 0xC) != 0xC )
                    {
                      ++v12;
                    }
                  }
                }
              }
              else if ( (*(_BYTE *)(*(_QWORD *)(v22 + 72) + 28LL) & 0xC) == 0xC )
              {
                ++v12;
              }
              v22 = *(_QWORD *)(v22 + 80);
            }
            while ( v22 != v21 && v22 );
          }
        }
      }
    }
    else
    {
      if ( a2 )
        v11 = *(_DWORD *)(v10 + 128);
      if ( a3 && (v6 & 0x40) != 0 )
      {
        v15 = &v26;
        v16 = *((_DWORD *)this + 52);
        v17 = 0;
        v27 = *((_DWORD *)this + 53);
        v18 = -1LL;
        v29 = v27;
        v26 = v16;
        v28 = v16;
        do
        {
          if ( *(int *)((char *)v15 + this - (Mesh *)&v26 + 220) == 12 )
          {
            v11 = v11 + 6 * *v15 - 6;
            v12 = *v15 + v12 - 1;
          }
          else
          {
            v19 = v18;
            if ( !v17 )
              v19 = 3LL;
            if ( *((_DWORD *)this + v19 + 55) == 12 )
              ++v12;
          }
          ++v17;
          ++v15;
          ++v18;
        }
        while ( v17 < 4 );
      }
    }
    *a4 = v12;
    v13 = 0;
    *a5 = v11;
  }
  else
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xF0Bu);
  }
  return v13;
}
