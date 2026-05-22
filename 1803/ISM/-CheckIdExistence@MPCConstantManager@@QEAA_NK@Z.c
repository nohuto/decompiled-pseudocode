/*
 * XREFs of ?CheckIdExistence@MPCConstantManager@@QEAA_NK@Z @ 0x18004BF14
 * Callers:
 *     ?RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004BDB8 (-RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18004C0C8 (-CheckDeviceConstantExistence@MPCConstantManager@@QEAA_NKAEBV-$basic_string@DU-$char_traits@D@st.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCConstantManager::CheckIdExistence(MPCConstantManager *this, unsigned int a2)
{
  __int64 *j; // rax
  __int64 **v3; // r8
  __int64 *v4; // r9
  __int64 *v5; // rcx
  unsigned int v6; // ecx
  __int64 **v7; // r10
  __int64 v8; // r10
  char v9; // r9
  __int64 **v10; // rcx
  __int64 *v11; // rdx
  __int64 *i; // rcx

  if ( !*((_QWORD *)this + 1) )
    return 0;
  j = *(__int64 **)this;
  v3 = *(__int64 ***)this;
  v4 = *(__int64 **)(*(_QWORD *)this + 8LL);
  v5 = v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *((_DWORD *)v5 + 8) >= a2 )
    {
      if ( *((_BYTE *)v3 + 25) && a2 < *((_DWORD *)v5 + 8) )
        v3 = (__int64 **)v5;
      j = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( !*((_BYTE *)v3 + 25) )
    v4 = *v3;
  while ( !*((_BYTE *)v4 + 25) )
  {
    v6 = *((_DWORD *)v4 + 8);
    v7 = (__int64 **)v4;
    if ( a2 >= v6 )
      v4 = (__int64 *)v4[2];
    else
      v4 = (__int64 *)*v4;
    if ( a2 >= v6 )
      v7 = v3;
    v3 = v7;
  }
  v8 = 0LL;
  if ( j == (__int64 *)v3 )
    return 0;
  v9 = 1;
  do
  {
    ++v8;
    if ( !*((_BYTE *)j + 25) )
    {
      v10 = (__int64 **)j[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v11 = *v10;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
          j = v11;
      }
    }
  }
  while ( j != (__int64 *)v3 );
  if ( !v8 )
    return 0;
  return v9;
}
