/*
 * XREFs of _lambda_7447beefc42d69fd1fb5049cd3e9ddc4_::operator() @ 0x1C0144454
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0059E80 (xxxLoadHmodIndex.c)
 * Callees:
 *     UserGetLastError @ 0x1C01445FC (UserGetLastError.c)
 *     UserGetLastStatus @ 0x1C0144638 (UserGetLastStatus.c)
 */

bool lambda_7447beefc42d69fd1fb5049cd3e9ddc4_::operator()()
{
  return (unsigned int)UserGetLastStatus() == -1073740284
      || (unsigned int)UserGetLastStatus() == -1073740760
      || (unsigned int)UserGetLastError() == 1655
      || (unsigned int)UserGetLastError() == 577;
}
